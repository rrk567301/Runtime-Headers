@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) const char *objCType;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)valueWithWeakObject:(id)a0;
+ (id)valueWithBytes:(const void *)a0 objCType:(const char *)a1;
+ (id)valueWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)valueWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)valueWithNonretainedObject:(id)a0;
+ (id)value:(const void *)a0 withObjCType:(const char *)a1;
+ (id)valueWithPointer:(const void *)a0;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getValue:(void *)a0;
- (BOOL)isNSValue__;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeValue;
- (id)weakObjectValue;
- (struct CGPoint { double x0; double x1; })pointValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectValue;
- (struct CGSize { double x0; double x1; })sizeValue;
- (id)nonretainedObjectValue;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1 strict:(BOOL)a2;
- (BOOL)isEqualToValue:(id)a0;
- (BOOL)_matchType:(const char *)a0 size:(unsigned long long)a1;
- (void *)pointerValue;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsValue;

@end
