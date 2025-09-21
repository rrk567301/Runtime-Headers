@class NSString, NSManagedObjectID;

@interface _DPNumericDataRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double clearNumber;
@property (nonatomic) double privateNumber;
@property (nonatomic) double creationDate;
@property (nonatomic) char submitted;
@property (nonatomic) long long reportVersion;
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
- (id)jsonString;
- (char)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 clearNumber:(double)a1 privateNumber:(double)a2 creationDate:(double)a3 submitted:(char)a4 objectId:(id)a5;
- (char)isEqualToNumericDataRecord:(id)a0;

@end
