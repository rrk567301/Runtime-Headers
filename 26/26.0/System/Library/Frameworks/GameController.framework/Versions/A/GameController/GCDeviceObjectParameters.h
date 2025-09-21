@interface GCDeviceObjectParameters : NSObject <NSCopying>

@property (class, readonly) Class objectClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
