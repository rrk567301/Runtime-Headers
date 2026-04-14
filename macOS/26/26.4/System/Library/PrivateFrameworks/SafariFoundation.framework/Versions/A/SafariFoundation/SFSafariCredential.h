@class NSString, NSDate;
@protocol SFSafariPasswordCredential;

@interface SFSafariCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<SFSafariPasswordCredential> externalCredential;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (nonatomic) BOOL isDefaultForAnAssociatedDomain;
@property (nonatomic) BOOL isForAppID;
@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSString *site;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *requestedHost;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, copy, nonatomic) NSString *externalProviderBundleID;
@property (readonly, copy, nonatomic) NSString *externalProviderExtensionBundleID;
@property (readonly, nonatomic) BOOL isExternalPasskey;
@property (readonly, nonatomic) NSString *oneTimeCode;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithExternalCredential:(id)a0;
- (id)initWithOneTimeCode:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 customTitle:(id)a4;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 customTitle:(id)a4 groupName:(id)a5;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 customTitle:(id)a4 groupName:(id)a5 requestedHost:(id)a6;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 customTitle:(id)a4 requestedHost:(id)a5;
- (id)initWithUser:(id)a0 password:(id)a1 site:(id)a2 creationDate:(id)a3 requestedHost:(id)a4;

@end
