@class NSColor;

@interface FI_TUpdateLayerView : FI_TView

@property (retain, nonatomic) NSColor *backgroundColor;

- (void)updateLayer;
- (void)setBackgroundColor:(id)a0;
- (void)initCommon;
- (BOOL)wantsUpdateLayer;

@end
