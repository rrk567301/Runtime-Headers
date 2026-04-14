@interface GCDeviceObjectParameters : NSObject <NSCopying>

@property (class, readonly) Class objectClass;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
