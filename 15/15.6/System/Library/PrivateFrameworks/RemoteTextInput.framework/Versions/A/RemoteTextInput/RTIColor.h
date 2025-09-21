@interface RTIColor : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _type : 8;
    double _values[4];
    struct CGColor { } *_cgColor;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGColor { } *)cgColor;

@end
