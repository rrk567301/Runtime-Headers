@class NSString, NSManagedObjectID;

@interface _DPCMSRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double creationDate;
@property (nonatomic) char submitted;
@property (copy, nonatomic) NSString *key;
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
- (id)initWithKey:(id)a0 creationDate:(double)a1 submitted:(char)a2 objectId:(id)a3;
- (char)isEqualToCMSRecord:(id)a0;

@end
