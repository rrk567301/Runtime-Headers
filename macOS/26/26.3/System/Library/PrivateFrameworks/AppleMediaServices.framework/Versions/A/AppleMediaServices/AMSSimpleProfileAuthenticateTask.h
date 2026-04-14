@class NSDictionary, ACAccountStore;

@interface AMSSimpleProfileAuthenticateTask : AMSTask {
    void /* function */ sponsorAuthenticateResult;
    void /* unknown type, empty encoding */ simpleProfileAltDSID;
    void /* unknown type, empty encoding */ simpleProfileDSID;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ authenticateTaskProvider;
}

@property (nonatomic, copy) NSDictionary *sponsorAuthenticateResult;
@property (nonatomic, retain) ACAccountStore *accountStore;

- (id)init;
- (void).cxx_destruct;
- (id)perform;
- (id)initWithSponsorAuthenticateResult:(id)a0 accountStore:(id)a1 simpleProfileAltDSID:(id)a2 simpleProfileDSID:(id)a3 options:(id)a4;
- (id)initWithSponsorAuthenticateResult:(id)a0 simpleProfileAltDSID:(id)a1 simpleProfileDSID:(id)a2 options:(id)a3;

@end
