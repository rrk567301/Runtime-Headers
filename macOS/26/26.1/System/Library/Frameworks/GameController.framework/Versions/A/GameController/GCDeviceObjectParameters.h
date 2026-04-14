@interface GCDeviceObjectParameters : NSObject <NSCopying>

@property (class, readonly) Class objectClass;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
