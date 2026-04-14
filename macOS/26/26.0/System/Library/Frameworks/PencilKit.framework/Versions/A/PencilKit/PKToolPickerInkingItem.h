@class PKInkingTool;

@interface PKToolPickerInkingItem : PKToolPickerItem

@property (readonly, nonatomic) PKInkingTool *inkingTool;
@property (nonatomic) BOOL allowsColorSelection;

+ (id)_defaultInkingItemForType:(id)a0;

- (double)width;
- (id)_dictionaryRepresentation;
- (id)tool;
- (id)_toolCopyWithColor:(id)a0;
- (id)_toolCopyWithWidth:(double)a0;
- (BOOL)_toolShouldBeSetOnCanvasView;
- (id)initWithInkType:(id)a0;
- (id)initWithInkType:(id)a0 color:(id)a1;
- (id)initWithInkType:(id)a0 color:(id)a1 width:(double)a2;
- (id)initWithInkType:(id)a0 color:(id)a1 width:(double)a2 azimuth:(double)a3 identifier:(id)a4;
- (id)initWithInkType:(id)a0 color:(id)a1 width:(double)a2 identifier:(id)a3;
- (id)initWithInkType:(id)a0 width:(double)a1;

@end
