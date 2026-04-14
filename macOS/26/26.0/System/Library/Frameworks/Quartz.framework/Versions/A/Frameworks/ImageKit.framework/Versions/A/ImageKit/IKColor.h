@interface IKColor : NSObject {
    struct CGColor { } *_cgColor;
}

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithRGBA:(double *)a0;

- (void)finalize;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (struct CGColor { } *)cgColor;
- (void)dealloc;

@end
