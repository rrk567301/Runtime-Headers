@class NSString, NSManagedObjectID;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double creationDate;
@property (nonatomic) double lastUpdate;
@property (nonatomic) long long balance;
@property (nonatomic) double cohortAggregateBalance;
@property (nonatomic) char submitted;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entityName;
- (char)copyToManagedObject:(id)a0;
- (char)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 creationDate:(double)a1 lastUpdate:(double)a2 balance:(long long)a3 cohortAggregateBalance:(double)a4 objectId:(id)a5;
- (char)isEqualToPrivacyBudgetRecord:(id)a0;

@end
