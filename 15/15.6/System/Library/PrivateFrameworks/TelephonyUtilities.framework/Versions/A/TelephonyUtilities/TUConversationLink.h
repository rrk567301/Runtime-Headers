@class NSUUID, NSString, TUUserConfiguration, NSDate, NSData, NSSet, NSURL, TUHandle;

@interface TUConversationLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) TUUserConfiguration *userConfiguration;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *deletionDate;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic, getter=isLocallyCreated) char locallyCreated;
@property (retain, nonatomic) TUHandle *originatorHandle;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) long long linkLifetimeScope;
@property (nonatomic) long long deleteReason;
@property (retain, nonatomic) NSString *URLFragment;
@property (copy, nonatomic) NSString *linkName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSSet *invitedMemberHandles;
@property (readonly, nonatomic) NSURL *URL;

+ (id)featureFlags;
+ (id)baseURLs;
+ (id)baseURLStrings;
+ (id)baseURLComponentsForURL:(id)a0;
+ (char)checkMatchingConversationLinkCriteriaForURL:(id)a0;
+ (id)conversationLinkComponentsFromURL:(id)a0;
+ (id)conversationLinkForURL:(id)a0;
+ (unsigned long long)conversationLinkVersion;
+ (id)preferredBaseURL;
+ (id)preferredBaseURLString;
+ (id)prefixedPseudonymFor:(id)a0;
+ (id)publicKeyForBase64EncodedString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (char)isEquivalentToConversationLink:(id)a0;
- (id)base64PublicKey;
- (char)allInvitedMembersInContactsChecking:(id)a0;
- (char)canCreateConversations;
- (id)fetchedResults;
- (id)generateDisplayName;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3;
- (id)initWithPseudonym:(id)a0 publicKey:(id)a1 groupUUID:(id)a2 originatorHandle:(id)a3 creationDate:(id)a4 deletionDate:(id)a5 expirationDate:(id)a6 invitedMemberHandles:(id)a7 locallyCreated:(char)a8 linkName:(id)a9 linkLifetimeScope:(long long)a10 deleteReason:(long long)a11;
- (char)isEqualToConversationLink:(id)a0;
- (char)isEquivalentToPseudonym:(id)a0 andPublicKey:(id)a1;
- (id)unprefixedPseudonym;

@end
