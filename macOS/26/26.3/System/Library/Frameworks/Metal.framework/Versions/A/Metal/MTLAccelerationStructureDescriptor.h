@interface MTLAccelerationStructureDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long usage;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isInstanceDescriptor;

@end
