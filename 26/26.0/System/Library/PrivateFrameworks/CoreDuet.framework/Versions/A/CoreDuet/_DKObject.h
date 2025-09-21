@class NSString, NSUUID, _DKSource, NSDate;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSUUID *UUID;
@property (retain) _DKSource *source;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *localCreationDate;

+ (id)entityName;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)fromPBCodable:(id)a0;
+ (id)fetchObjectWithUUID:(id)a0 context:(id)a1;

- (long long)integerValue;
- (BOOL)boolValue;
- (id)entityName;
- (void)encodeWithCoder:(id)a0;
- (id)stringValue;
- (id)init;
- (long long)typeCode;
- (double)doubleValue;
- (id)initWithCoder:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)toPBCodable;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)copyBaseObjectInfoFromManagedObject:(id)a0 cache:(id)a1;

@end
