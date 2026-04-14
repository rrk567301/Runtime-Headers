@class NSString, CCDataStorageBuilder;

@interface CCData : NSObject <CCVisitable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CCDataStorageBuilder *storageBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugQuickLookObject;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)initMTLTextureMember:(id)a0 withCoder:(id)a1;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)initMTLBufferDataArrayMember:(id)a0 withCoder:(id)a1;
- (void)initMTLBufferDataMember:(id)a0 withCoder:(id)a1;
- (void)initMTLTextureArrayMember:(id)a0 withCoder:(id)a1;

@end
