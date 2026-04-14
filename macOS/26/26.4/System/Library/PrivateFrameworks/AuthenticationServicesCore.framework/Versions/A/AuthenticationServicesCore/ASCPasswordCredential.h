@class NSString, NSDate;

@interface ASCPasswordCredential : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) long long serviceIdentifierType;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSString *site;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) BOOL isExternal;
@property (readonly, nonatomic) NSString *externalProviderBundleIdentifier;
@property (readonly, nonatomic) NSString *externalProviderExtensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 serviceIdentifierType:(long long)a2 serviceIdentifier:(id)a3 site:(id)a4 creationDate:(id)a5 externalProviderBundleIdentifier:(id)a6 externalProviderExtensionBundleIdentifier:(id)a7;

@end
