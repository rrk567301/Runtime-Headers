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

+ (id)blackColor;
+ (id)clearColor;
+ (id)yellowColor;
+ (id)lightGrayColor;
+ (id)blueColor;
+ (id)orangeColor;
+ (id)redColor;
+ (id)grayColor;
+ (id)cyanColor;
+ (id)whiteColor;
+ (id)greenColor;
+ (id)purpleColor;
+ (id)magentaColor;
+ (id)brownColor;
+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)systemBlueColor;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)darkGrayColor;
+ (id)colorFromSystemColor:(id)a0;
+ (id)colorRepresentedByString:(id)a0;

- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)stringRepresentation;
- (void)dealloc;
- (id)_initWithAlpha:(double)a0;

@end
