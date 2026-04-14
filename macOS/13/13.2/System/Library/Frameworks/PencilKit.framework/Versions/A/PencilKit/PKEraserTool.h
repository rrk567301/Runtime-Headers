@interface PKEraserTool : PKTool

@property (readonly, nonatomic) double _weight;
@property (readonly, nonatomic) long long eraserType;

- (id)initWithEraserType:(long long)a0;
- (id)initWithEraserType:(long long)a0 weight:(double)a1;

@end
