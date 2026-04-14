@class PKTool, NSString, NSDictionary, NSHashTable, NSColor;

@interface PKToolPickerItem : NSObject <NSCopying> {
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSColor *color;
@property (nonatomic) double width;
@property (readonly, nonatomic) BOOL _toolShouldBeSetOnCanvasView;
@property (readonly, nonatomic) NSDictionary *_dictionaryRepresentation;
@property (retain, nonatomic) PKTool *_tool;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PKTool *tool;

- (void)_addObserver:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_updateTool:(id)a0 shouldCallObserver:(BOOL)a1;
- (void)_reloadImage;
- (void)_setColor:(id)a0 shouldCallObserver:(BOOL)a1;
- (void)_setWidth:(double)a0 shouldCallObserver:(BOOL)a1;
- (id)_toolCopyWithColor:(id)a0;
- (id)_toolCopyWithWidth:(double)a0;
- (id)initWithTool:(id)a0;
- (id)initWithTool:(id)a0 identifier:(id)a1;

@end
