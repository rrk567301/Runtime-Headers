@interface _TtCC28GenerativeExperiencesRuntime25AvailabilityPrivateServer6Server : NSObject <GenerativeModelsFoundation.AvailabilityXPCProtocol> {
    void /* unknown type, empty encoding */ clientAdditionalEntitlementCapabilities;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateCSFAccessGrantedFor:(id)a0 with:(id /* block */)a1;
- (void)updateAllWithUpdateReason:(id)a0 with:(id /* block */)a1;
- (void)currentAvailabilitySecureWithParametersData:(id)a0 with:(id /* block */)a1;
- (void)joinWaitlistWithUseCaseIdentifier:(id)a0 with:(id /* block */)a1;
- (void)secureWriteCloudSubscriptionFeaturesAvailabilityWithCsfAvailabilityWrapperData:(id)a0 with:(id /* block */)a1;
- (void)updateOptInStatusWithOptedIn:(BOOL)a0 with:(id /* block */)a1;
- (void)waitlistStatusWithUseCaseIdentifier:(id)a0 with:(id /* block */)a1;

@end
