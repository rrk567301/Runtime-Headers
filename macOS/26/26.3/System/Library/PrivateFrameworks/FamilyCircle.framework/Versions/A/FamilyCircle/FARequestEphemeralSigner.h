@class NSDictionary, ACAccount;

@interface FARequestEphemeralSigner : NSObject <FamilyCircle.FARequestSigner> {
    void /* function */ ephemeralAuthResults;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, copy) NSDictionary *ephemeralAuthResults;

- (id)init;
- (void)signURLRequest:(id)a0;
- (void).cxx_destruct;
- (id)accountInfoPayload;
- (id)initWithEphemeralAuthResults:(id)a0;

@end
