@class NSString, CKRecordZoneID, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, copy) NSString *subscriptionID;
@property (readonly) long long subscriptionType;
@property (copy) CKNotificationInfo *notificationInfo;

+ (void)initialize;

- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1 options:(unsigned long long)a2;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)_initWithSubscriptionID:(id)a0 subscriptionType:(long long)a1 recordType:(id)a2 zoneID:(id)a3;
- (unsigned long long)subscriptionOptions;
- (void)setSubscriptionID_modelMutation:(id)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (id)predicate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithZoneID:(id)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
