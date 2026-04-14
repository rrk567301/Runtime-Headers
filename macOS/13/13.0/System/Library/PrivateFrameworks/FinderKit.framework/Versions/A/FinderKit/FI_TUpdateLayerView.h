@class NSColor;

@interface FI_TUpdateLayerView : FI_TView

@property (retain, nonatomic) NSColor *backgroundColor;

- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)setBackgroundColor:(id)a0;
- (void)initCommon;

@end
