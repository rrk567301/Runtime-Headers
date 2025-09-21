@interface QCSCN_BoundingBox : NSObject

@property struct _SCNVector3 { double x; double y; double z; } min;
@property struct _SCNVector3 { double x; double y; double z; } max;

+ (id)propertyKeys;
+ (char)isKeyExcludedFromWebScript:(const char *)a0;
+ (char)isSelectorExcludedFromWebScript:(SEL)a0;
+ (int)_baseTypeForProperty:(id)a0;

- (id)description;
- (id)propertyKeys;

@end
