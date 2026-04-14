@class NSDictionary, ACAccount;

@interface FARequestEphemeralSigner : NSObject <FamilyCircle.FARequestSigner> {
    void /* function */ ephemeralAuthResults;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, copy) NSDictionary *ephemeralAuthResults;

- (void)signURLRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)accountInfoPayload;
- (id)initWithEphemeralAuthResults:(id)a0;

@end
