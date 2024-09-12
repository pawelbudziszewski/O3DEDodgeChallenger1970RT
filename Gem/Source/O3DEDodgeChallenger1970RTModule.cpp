
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "O3DEDodgeChallenger1970RTSystemComponent.h"

#include <O3DEDodgeChallenger1970RT/O3DEDodgeChallenger1970RTTypeIds.h>

namespace O3DEDodgeChallenger1970RT
{
    class O3DEDodgeChallenger1970RTModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(O3DEDodgeChallenger1970RTModule, O3DEDodgeChallenger1970RTModuleTypeId, AZ::Module);
        AZ_CLASS_ALLOCATOR(O3DEDodgeChallenger1970RTModule, AZ::SystemAllocator);

        O3DEDodgeChallenger1970RTModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                O3DEDodgeChallenger1970RTSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<O3DEDodgeChallenger1970RTSystemComponent>(),
            };
        }
    };
}// namespace O3DEDodgeChallenger1970RT

AZ_DECLARE_MODULE_CLASS(Gem_O3DEDodgeChallenger1970RT, O3DEDodgeChallenger1970RT::O3DEDodgeChallenger1970RTModule)
