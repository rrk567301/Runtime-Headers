@interface QCSCN_BoundingSphere : NSObject

@property struct _SCNVector3 { double x; double y; double z; } center;
@property double radius;

+ (id)propertyKeys;
+ (char)isKeyExcludedFromWebScript:(const char *)a0;
+ (char)isSelectorExcludedFromWebScript:(SEL)a0;
+ (int)_baseTypeForProperty:(id)a0;

- (id)description;
- (id)propertyKeys;

@end
