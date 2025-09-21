@class NSString, NSUUID, _DKSource, NSDate;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSUUID *UUID;
@property (retain) _DKSource *source;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *localCreationDate;

+ (id)entityName;
+ (id)fetchObjectWithUUID:(id)a0 context:(id)a1;
+ (id)fromPBCodable:(id)a0;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(char)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;

- (id)init;
- (char)isEqual:(id)a0;
- (double)doubleValue;
- (void).cxx_destruct;
- (char)boolValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)integerValue;
- (id)stringValue;
- (long long)typeCode;
- (id)entityName;
- (char)copyBaseObjectInfoFromManagedObject:(id)a0 cache:(id)a1;
- (char)copyToManagedObject:(id)a0;
- (id)toPBCodable;

@end
