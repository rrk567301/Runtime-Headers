@class NSString;

@interface ASCCredentialProviderExtensionLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *providerName;
@property (readonly, copy, nonatomic) NSString *providerExtensionBundleID;
@property (readonly, copy, nonatomic) NSString *providerExtensionContainingAppBundleID;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) char isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
