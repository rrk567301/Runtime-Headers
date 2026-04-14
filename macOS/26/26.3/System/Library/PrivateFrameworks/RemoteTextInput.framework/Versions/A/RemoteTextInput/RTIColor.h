@interface RTIColor : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _type : 8;
    double _values[4];
    struct CGColor { } *_cgColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;

- (struct CGColor { } *)cgColor;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
