@interface PKEraserTool : PKTool

@property (readonly, nonatomic) double _weight;
@property (readonly, nonatomic) long long eraserType;
@property (readonly, nonatomic) double width;

+ (double)_weightForWidth:(double)a0 type:(long long)a1;
+ (double)_widthForWeight:(double)a0 type:(long long)a1;
+ (double)defaultWidthForEraserType:(long long)a0;
+ (double)maximumWidthForEraserType:(long long)a0;
+ (double)minimumWidthForEraserType:(long long)a0;

- (void)setWidth:(double)a0;
- (BOOL)_isEraserTool;
- (BOOL)_isFixedWidthBitmap;
- (double)_width;
- (id)initWithEraserType:(long long)a0;
- (id)initWithEraserType:(long long)a0 weight:(double)a1;
- (id)initWithEraserType:(long long)a0 width:(double)a1;

@end
