@class NSString;

@interface ASPasswordAuthenticationPaneViewControllerConfiguration : NSObject {
    void /* unknown type, empty encoding */ overrideTitle;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ contentFields;
}

@property (nonatomic, readonly) unsigned long long persona;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *passwordCredentialSite;

- (id)init;
- (id)headerConfiguration;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithManualPasswordEntryForCredentialProviderWithApplicationBundleID:(id)a0 site:(id)a1 serviceName:(id)a2 serviceType:(unsigned long long)a3 proxiedOriginDeviceName:(id)a4;
- (id)initWithManualPasswordEntryForCredentialProviderWithProxiedIconData:(id)a0 proxiedIconScale:(double)a1 site:(id)a2 serviceName:(id)a3 serviceType:(unsigned long long)a4 proxiedOriginDeviceName:(id)a5;
- (id)initWithManualPasswordEntryForPasswordManagerWithSite:(id)a0 serviceName:(id)a1 serviceType:(unsigned long long)a2 proxiedOriginDeviceName:(id)a3;
- (id)initWithPersona:(unsigned long long)a0 presentationContext:(id)a1;
- (id)initWithSecurityKeyEntryForNewPIN:(BOOL)a0 mode:(long long)a1;
- (id)initWithSecurityKeyEntryForNewPIN:(BOOL)a0 mode:(long long)a1 preferredIcon:(long long)a2;

@end
