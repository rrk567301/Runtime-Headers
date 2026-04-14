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

+ (id)redColor;
+ (id)lightGrayColor;
+ (id)clearColor;
+ (id)yellowColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)purpleColor;
+ (id)whiteColor;
+ (id)greenColor;
+ (id)grayColor;
+ (id)blackColor;
+ (id)cyanColor;
+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)systemBlueColor;
+ (id)darkGrayColor;
+ (id)colorFromSystemColor:(id)a0;
+ (id)colorRepresentedByString:(id)a0;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)stringRepresentation;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (void)dealloc;
- (id)_initWithAlpha:(double)a0;

@end
