@class NSColor, LPSize;

@interface LPShadowStyle : NSObject

@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) LPSize *offset;

+ (id)cardHeadingIconShadow;
+ (id)collaborationPreviewShadow;
+ (id)wordmarkShadow;

- (void).cxx_destruct;
- (id)init;

@end
