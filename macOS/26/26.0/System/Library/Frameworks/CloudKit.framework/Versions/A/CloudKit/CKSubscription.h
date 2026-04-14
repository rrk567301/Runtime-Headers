@class NSString, CKRecordZoneID, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, copy) NSString *subscriptionID;
@property (readonly) long long subscriptionType;
@property (copy) CKNotificationInfo *notificationInfo;

+ (void)initialize;

- (void)setSubscriptionID_modelMutation:(id)a0;
- (id)debugDescription;
- (unsigned long long)subscriptionOptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)description;
- (id)initWithZoneID:(id)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)_initWithSubscriptionID:(id)a0 subscriptionType:(long long)a1 recordType:(id)a2 zoneID:(id)a3;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1 options:(unsigned long long)a2;
- (unsigned long long)hash;
- (id)predicate;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
