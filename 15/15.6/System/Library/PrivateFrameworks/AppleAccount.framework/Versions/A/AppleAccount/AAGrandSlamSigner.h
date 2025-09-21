@class NSString, ACAccount, ACAccountStore;

@interface AAGrandSlamSigner : NSObject {
    NSString *_appTokenID;
}

@property (readonly, nonatomic) ACAccount *grandSlamAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) char useAltDSID;
@property (retain, nonatomic) NSString *headerFieldKey;

- (void).cxx_destruct;
- (char)signURLRequest:(id)a0;
- (id)initWithAccountStore:(id)a0 grandSlamAccount:(id)a1 appTokenID:(id)a2;
- (char)signURLRequest:(id)a0 isUserInitiated:(char)a1;
- (id)initWithAppleAccount:(id)a0 grandSlamAccount:(id)a1 accountStore:(id)a2 appTokenID:(id)a3;

@end
