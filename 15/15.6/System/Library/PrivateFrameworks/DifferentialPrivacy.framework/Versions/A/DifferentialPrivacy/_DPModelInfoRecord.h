@class NSManagedObjectID;

@interface _DPModelInfoRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) short majorVersion;
@property (nonatomic) short minorVersion;
@property (nonatomic) double creationDate;
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
- (id)initWithMajorVersion:(short)a0 minorVersion:(short)a1 creationDate:(double)a2 objectId:(id)a3;
- (char)isEqualToModelInfo:(id)a0;

@end
