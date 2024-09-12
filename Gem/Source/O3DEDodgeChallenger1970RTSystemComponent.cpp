
#include <AzCore/Serialization/SerializeContext.h>

#include "O3DEDodgeChallenger1970RTSystemComponent.h"

#include <O3DEDodgeChallenger1970RT/O3DEDodgeChallenger1970RTTypeIds.h>

namespace O3DEDodgeChallenger1970RT
{
    AZ_COMPONENT_IMPL(O3DEDodgeChallenger1970RTSystemComponent, "O3DEDodgeChallenger1970RTSystemComponent",
        O3DEDodgeChallenger1970RTSystemComponentTypeId);

    void O3DEDodgeChallenger1970RTSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<O3DEDodgeChallenger1970RTSystemComponent, AZ::Component>()
                ->Version(0)
                ;
        }
    }

    void O3DEDodgeChallenger1970RTSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("O3DEDodgeChallenger1970RTService"));
    }

    void O3DEDodgeChallenger1970RTSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("O3DEDodgeChallenger1970RTService"));
    }

    void O3DEDodgeChallenger1970RTSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void O3DEDodgeChallenger1970RTSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    O3DEDodgeChallenger1970RTSystemComponent::O3DEDodgeChallenger1970RTSystemComponent()
    {
        if (O3DEDodgeChallenger1970RTInterface::Get() == nullptr)
        {
            O3DEDodgeChallenger1970RTInterface::Register(this);
        }
    }

    O3DEDodgeChallenger1970RTSystemComponent::~O3DEDodgeChallenger1970RTSystemComponent()
    {
        if (O3DEDodgeChallenger1970RTInterface::Get() == this)
        {
            O3DEDodgeChallenger1970RTInterface::Unregister(this);
        }
    }

    void O3DEDodgeChallenger1970RTSystemComponent::Init()
    {
    }

    void O3DEDodgeChallenger1970RTSystemComponent::Activate()
    {
        O3DEDodgeChallenger1970RTRequestBus::Handler::BusConnect();
    }

    void O3DEDodgeChallenger1970RTSystemComponent::Deactivate()
    {
        O3DEDodgeChallenger1970RTRequestBus::Handler::BusDisconnect();
    }
}
