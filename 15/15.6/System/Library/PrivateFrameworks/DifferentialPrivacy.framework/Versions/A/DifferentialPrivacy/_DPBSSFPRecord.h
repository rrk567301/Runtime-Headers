@class NSString, NSManagedObjectID;

@interface _DPBSSFPRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *privateValue;
@property (copy, nonatomic) NSString *tableVersion;
@property (nonatomic) long long segmentIndex;
@property (nonatomic) char verificationMode;
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
- (id)initWithKey:(id)a0 privateValue:(id)a1 tableVersion:(id)a2 segmentIndex:(long long)a3 verificationMode:(char)a4 creationDate:(double)a5 submitted:(char)a6 objectId:(id)a7;
- (char)isEqualToBSSFPRecord:(id)a0;

@end
