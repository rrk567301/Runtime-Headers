@class PKEraserTool;

@interface PKToolPickerEraserItem : PKToolPickerItem

@property (readonly, nonatomic) PKEraserTool *eraserTool;

- (double)width;
- (id)_dictionaryRepresentation;
- (id)tool;
- (id)_toolCopyWithWidth:(double)a0;
- (BOOL)_toolShouldBeSetOnCanvasView;
- (id)initWithEraserType:(long long)a0;
- (id)initWithEraserType:(long long)a0 width:(double)a1;

@end
