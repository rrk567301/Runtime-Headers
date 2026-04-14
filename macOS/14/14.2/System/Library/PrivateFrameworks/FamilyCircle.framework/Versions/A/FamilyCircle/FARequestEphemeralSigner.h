@class ACAccount;

@interface FARequestEphemeralSigner : NSObject <FamilyCircle.FARequestSigner> {
    void /* unknown type, empty encoding */ ephemeralAuthResults;
}

@property (nonatomic, readonly) ACAccount *account;

- (id)init;
- (void).cxx_destruct;
- (void)signURLRequest:(id)a0;
- (id)accountInfoPayload;
- (id)initWithEphemeralAuthResults:(id)a0;

@end
