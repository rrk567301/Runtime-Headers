@interface AMSDeveloperSilentAuthTokenPerformer : NSObject {
    void /* unknown type, empty encoding */ manager;
}

- (id)init;
- (void).cxx_destruct;
- (id)performUpdateConsentWithStatus:(BOOL)a0;
- (id)initWithBundleId:(id)a0 account:(id)a1 mediaType:(id)a2 bag:(id)a3;
- (id)performFetchToken;
- (id)performUpdateWithToken:(id)a0;
- (id)presentConsent;

@end
