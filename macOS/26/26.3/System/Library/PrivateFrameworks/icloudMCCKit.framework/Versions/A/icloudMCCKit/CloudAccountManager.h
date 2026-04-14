@interface CloudAccountManager : NSObject <icloudMCCKit.CloudAccountManagerProtocol> {
    void /* unknown type, empty encoding */ userDefaultsMailAppGroup;
    void /* unknown type, empty encoding */ mailPropertyKey;
}

- (id)init;
- (void).cxx_destruct;
- (id)getAppleAccountWithEmailAddress:(id)a0 error:(id *)a1;
- (id)getPrimaryAppleAccountAndReturnError:(id *)a0;

@end
