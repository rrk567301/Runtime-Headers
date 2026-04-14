@class NSColor;

@interface LPShadowStyle : NSObject

@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) NSColor *color;

+ (id)cardHeadingIconShadow;

- (id)init;
- (void).cxx_destruct;

@end
