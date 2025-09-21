@interface TPSBiomeDataProvider : NSObject {
    void /* unknown type, empty encoding */ biomeRegistrations;
    void /* unknown type, empty encoding */ registrationQueue;
}

+ (void)donateEventWithIdentifier:(id)a0 context:(id)a1 userInfo:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)deregisterWakingForAllRegistrations;
- (void)deregisterWakingForRegistrationID:(id)a0;
- (void)registerWakingForEventWithEvent:(id)a0 registrationID:(id)a1 clientIdentifier:(id)a2 completion:(id /* block */)a3;

@end
