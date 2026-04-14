@class NSString, NSExtension;

@interface ASCCredentialProvider : NSObject {
    void /* unknown type, empty encoding */ _value;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *applicationBundleID;
@property (nonatomic, readonly) NSString *extensionBundleID;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *externalExtensionBundleID;
@property (nonatomic, readonly) NSExtension *externalExtension;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initForExternalProviderWithExtension:(id)a0 applicationBundleID:(id)a1 displayName:(id)a2;
- (id)initForPasswordsApp;

@end
