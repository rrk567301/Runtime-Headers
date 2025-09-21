@class PKInk;

@interface PKTool : NSObject <NSCopying>

@property (readonly, nonatomic) PKInk *ink;

+ (char)_inkIsInkingTool:(id)a0;
+ (id)_toolWithInk:(id)a0;
+ (id)_toolWithInk:(id)a0 configuration:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithInk:(id)a0;
- (char)_isEraserTool;
- (char)_isHandwritingTool;
- (char)_isLassoTool;
- (char)_isRulerTool;

@end
