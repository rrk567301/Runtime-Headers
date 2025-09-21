@class NSString, NSArray, NSDictionary, NSNumber;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *identifier;
@property (copy, nonatomic) NSString *serverId;
@property (copy, nonatomic) NSNumber *dsid;
@property (nonatomic) char isFamilyMember;
@property (copy, nonatomic) NSArray *aliasServerIds;
@property (copy, nonatomic) NSArray *invitationSentToIds;
@property (copy, nonatomic) NSDictionary *expiresByGroupId;
@property (copy, nonatomic) NSString *hashedDSID;
@property (getter=isPending) char pending;
@property (copy) NSNumber *trackingTimestamp;
@property (copy, nonatomic) NSNumber *favoriteOrder;
@property (copy, nonatomic) NSString *_prettyNameInternal;
@property long long idsStatus;
@property char reachable;
@property (copy) NSString *qualifiedIdentifier;
@property (copy, nonatomic) NSString *_idsCorrelationIdentifierInternal;

+ (id)familyHandleWithId:(id)a0 dsid:(id)a1;
+ (id)handleWithId:(id)a0;
+ (id)handleWithId:(id)a0 serverId:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)recordId;
- (id)sanitizePhoneNumber:(id)a0;
- (char)isPhoneNumber;
- (id)IDSRecipientFromHandle:(id)a0;
- (void)abPreferencesDidChange;
- (void)addressBookDidChange;
- (id)cachedPrettyName;
- (void)clearFavoriteOrder;
- (id)comparisonIdentifier;
- (void)correlationIdentifierForHandle:(id)a0 withCompletion:(id /* block */)a1;
- (void)idsCorrelationIdentifierWithCompletion:(id /* block */)a0;
- (char)isSharingThroughGroupId:(id)a0;
- (id)prettyName;
- (long long)prettyNameCompare:(id)a0;
- (void)prettyNameWithCompletion:(id /* block */)a0;
- (void)setICloudId:(id)a0;

@end
