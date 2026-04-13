@class NSUUID, NSString, TUUserConfiguration, NSDate, NSData, NSSet, NSURL, TUHandle;

@interface TUConversationLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) TUUserConfiguration *userConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated;
@property (retain, nonatomic) TUHandle *originatorHandle;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) long long linkLifetimeScope;
@property (retain, nonatomic) NSString *URLFragment;
@property (copy, nonatomic) NSString *linkName;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSSet *invitedMemberHandles;
@property (readonly, nonatomic) NSURL *URL;

+ (id)baseURLs;
+ (id)baseURLStrings;
+ (id)preferredBaseURL;
+ (id)conversationLinkForURL:(id)a0;
+ (BOOL)checkMatchingConversationLinkCriteriaForURL:(id)a0;
+ (id)prefixedPseudonymFor:(id)a0;
+ (id)publicKeyForBase64EncodedString:(id)a0;
+ (id)conversationLinkComponentsFromURL:(id)a0;
+ (unsigned long long)conversationLinkVersion;
+ (id)baseURLComponentsForURL:(id)a0;
+ (id)preferredBaseURLString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3 creationDate:(id)a4 expirationDate:(id)a5 invitedMemberHandles:(id)a6 locallyCreated:(BOOL)a7 linkName:(id)a8 linkLifetimeScope:(long long)a9;
- (id)unprefixedPseudonym;
- (id)base64PublicKey;
- (BOOL)isEqualToConversationLink:(id)a0;
- (BOOL)isEquivalentToPseudonym:(id)a0 andPublicKey:(id)a1;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3;
- (BOOL)canCreateConversations;
- (BOOL)isEquivalentToConversationLink:(id)a0;

@end
