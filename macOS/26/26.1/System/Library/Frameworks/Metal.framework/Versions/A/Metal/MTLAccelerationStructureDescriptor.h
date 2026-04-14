@interface MTLAccelerationStructureDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long usage;

- (long long)type;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isInstanceDescriptor;

@end
