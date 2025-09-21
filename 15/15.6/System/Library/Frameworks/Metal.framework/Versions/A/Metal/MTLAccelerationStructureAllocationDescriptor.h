@interface MTLAccelerationStructureAllocationDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) char forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;

@end
