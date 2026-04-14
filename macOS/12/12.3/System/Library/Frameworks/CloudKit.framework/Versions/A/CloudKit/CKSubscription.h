@class NSString, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSString *subscriptionID;
@property (nonatomic) long long subscriptionType;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)predicate;
- (id)zoneID;
- (id)_initWithSubscriptionID:(id)a0 subscriptionType:(long long)a1 recordType:(id)a2;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (id)initWithZoneID:(id)a0 options:(unsigned long long)a1;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1 options:(unsigned long long)a2;
- (unsigned long long)subscriptionOptions;

@end
