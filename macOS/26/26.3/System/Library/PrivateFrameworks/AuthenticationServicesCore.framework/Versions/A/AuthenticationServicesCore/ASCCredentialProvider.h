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

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initForExternalProviderWithExtension:(id)a0 applicationBundleID:(id)a1 displayName:(id)a2;
- (id)initForPasswordsApp;

@end
