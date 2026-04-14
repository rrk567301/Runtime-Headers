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
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)lightGrayColor;
+ (id)whiteColor;
+ (id)grayColor;
+ (id)cyanColor;
+ (id)magentaColor;
+ (id)blackColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)brownColor;
+ (id)redColor;
+ (id)yellowColor;
+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)systemBlueColor;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)darkGrayColor;
+ (id)colorFromSystemColor:(id)a0;
+ (id)colorRepresentedByString:(id)a0;

- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)dealloc;
- (id)stringRepresentation;
- (id)_initWithAlpha:(double)a0;

@end
