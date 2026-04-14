@class NSString;

@interface BRAccountDescriptor : NSObject <NSSecureCoding> {
    NSString *_personaIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) BOOL isLoggedInToCloudDocs;
@property (readonly, nonatomic) BOOL isDataSeparated;
@property (readonly, nonatomic) NSString *organizationName;

+ (id)accountDescriptorForPersonaID:(id)a0;
+ (BOOL)mightHaveDataSeparatedAccountDescriptor;
+ (id)accountDescriptorForAccountID:(id)a0;
+ (void)refreshCache:(BOOL)a0;
+ (id)accountDescriptorForPersonaID:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (id)matchDomainWithAccountAndStampDomainIfNeeded:(id)a0 withAccounts:(id)a1 persistDomain:(BOOL *)a2;
+ (void)clearAccountDescriptorCache;
+ (id)allLoggedInAccountDescriptors;
+ (id)accountDescriptorForURL:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (id)allEligibleAccountDescriptors;
+ (id)accountDescriptorForAccountID:(id)a0 mustBeLoggedIn:(BOOL)a1;
+ (id)accountDescriptorForURL:(id)a0;

- (id)personaIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonaIdentifier:(id)a0 accountIdentifier:(id)a1 domainIdentifier:(id)a2 organizationName:(id)a3 dataSeparated:(BOOL)a4 loggedInToCloudDocs:(BOOL)a5;

@end
