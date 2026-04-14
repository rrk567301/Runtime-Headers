@interface KHColor : NSObject {
    int _spinlock;
}

@property double whiteComponent;
@property double redComponent;
@property double greenComponent;
@property double blueComponent;
@property double alphaComponent;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) id systemColor;

+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)redColor;
+ (id)clearColor;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)greenColor;
+ (id)purpleColor;
+ (id)blueColor;
+ (id)lightGrayColor;
+ (id)darkGrayColor;
+ (id)grayColor;
+ (id)cyanColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)brownColor;
+ (id)systemBlueColor;
+ (id)colorFromSystemColor:(id)a0;
+ (id)colorRepresentedByString:(id)a0;

- (void)dealloc;
- (id)stringRepresentation;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)_initWithAlpha:(double)a0;

@end
