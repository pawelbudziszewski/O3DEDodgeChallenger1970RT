
#pragma once

#include <AzCore/Component/Component.h>

#include <O3DEDodgeChallenger1970RT/O3DEDodgeChallenger1970RTBus.h>

namespace O3DEDodgeChallenger1970RT
{
    class O3DEDodgeChallenger1970RTSystemComponent
        : public AZ::Component
        , protected O3DEDodgeChallenger1970RTRequestBus::Handler
    {
    public:
        AZ_COMPONENT_DECL(O3DEDodgeChallenger1970RTSystemComponent);

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        O3DEDodgeChallenger1970RTSystemComponent();
        ~O3DEDodgeChallenger1970RTSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // O3DEDodgeChallenger1970RTRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
