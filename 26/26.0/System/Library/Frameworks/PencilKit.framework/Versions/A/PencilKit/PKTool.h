@class NSString, PKInk, PKToolConfiguration;

@interface PKTool : NSObject <NSCopying>

@property (copy, nonatomic, setter=_setToolPickerItemIdentifier:) NSString *_toolPickerItemIdentifier;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) PKToolConfiguration *_configuration;

+ (BOOL)_inkIsInkingTool:(id)a0;
+ (id)_toolWithInk:(id)a0;
+ (id)_toolWithInk:(id)a0 configuration:(id)a1;

- (id)_color;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithInk:(id)a0;
- (id)_initWithInk:(id)a0 configuration:(id)a1;
- (BOOL)_isEraserTool;
- (BOOL)_isHandwritingTool;
- (BOOL)_isLassoTool;
- (BOOL)_isRulerTool;
- (double)_strokeWeight;
- (double)_width;

@end
