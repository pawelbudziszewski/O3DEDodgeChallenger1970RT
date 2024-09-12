
#pragma once

#include <O3DEDodgeChallenger1970RT/O3DEDodgeChallenger1970RTTypeIds.h>

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace O3DEDodgeChallenger1970RT
{
    class O3DEDodgeChallenger1970RTRequests
    {
    public:
        AZ_RTTI(O3DEDodgeChallenger1970RTRequests, O3DEDodgeChallenger1970RTRequestsTypeId);
        virtual ~O3DEDodgeChallenger1970RTRequests() = default;
        // Put your public methods here
    };

    class O3DEDodgeChallenger1970RTBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using O3DEDodgeChallenger1970RTRequestBus = AZ::EBus<O3DEDodgeChallenger1970RTRequests, O3DEDodgeChallenger1970RTBusTraits>;
    using O3DEDodgeChallenger1970RTInterface = AZ::Interface<O3DEDodgeChallenger1970RTRequests>;

} // namespace O3DEDodgeChallenger1970RT
