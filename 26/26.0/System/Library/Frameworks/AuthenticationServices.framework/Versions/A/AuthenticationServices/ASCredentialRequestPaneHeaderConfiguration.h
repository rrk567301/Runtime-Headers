@class NSString;

@interface ASCredentialRequestPaneHeaderConfiguration : NSObject {
    void /* unknown type, empty encoding */ rawConfiguration;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) long long hash;

+ (id)credentialProviderHeaderWithApplicationBundleID:(id)a0 title:(id)a1 subtitle:(id)a2;
+ (id)noCredentialsErrorWithServiceName:(id)a0;
+ (id)passwordManagerHeaderWithTitle:(id)a0 subtitle:(id)a1;
+ (id)securityKeyHeaderWithIcon:(long long)a0 title:(id)a1 subtitle:(id)a2;
+ (id)signInFailedErrorWithSubtitle:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;

@end
