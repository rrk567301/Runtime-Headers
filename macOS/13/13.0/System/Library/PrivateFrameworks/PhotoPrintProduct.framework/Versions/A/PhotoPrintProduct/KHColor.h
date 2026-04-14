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
+ (id)blackColor;
+ (id)darkGrayColor;
+ (id)lightGrayColor;
+ (id)whiteColor;
+ (id)grayColor;
+ (id)clearColor;
+ (id)redColor;
+ (id)greenColor;
+ (id)blueColor;
+ (id)cyanColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)brownColor;
+ (id)systemBlueColor;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)colorFromSystemColor:(id)a0;
+ (id)colorRepresentedByString:(id)a0;

- (void)dealloc;
- (id)stringRepresentation;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)_initWithAlpha:(double)a0;

@end
