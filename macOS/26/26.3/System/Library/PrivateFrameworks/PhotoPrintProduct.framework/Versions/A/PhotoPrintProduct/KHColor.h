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

+ (id)clearColor;
+ (id)magentaColor;
+ (id)blueColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)blackColor;
+ (id)grayColor;
+ (id)redColor;
+ (id)greenColor;
+ (id)cyanColor;
+ (id)whiteColor;
+ (id)yellowColor;
+ (id)lightGrayColor;
+ (id)brownColor;
+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)systemBlueColor;
+ (id)darkGrayColor;
+ (id)colorFromSystemColor:(id)a0;
+ (id)colorRepresentedByString:(id)a0;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)stringRepresentation;
- (void)dealloc;
- (id)_initWithAlpha:(double)a0;

@end
