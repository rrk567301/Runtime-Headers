@class NSDictionary, ACAccount;

@interface FARequestEphemeralSigner : NSObject <FamilyCircle.FARequestSigner> {
    void /* function */ ephemeralAuthResults;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, copy) NSDictionary *ephemeralAuthResults;

- (void).cxx_destruct;
- (id)init;
- (void)signURLRequest:(id)a0;
- (id)accountInfoPayload;
- (id)initWithEphemeralAuthResults:(id)a0;

@end
