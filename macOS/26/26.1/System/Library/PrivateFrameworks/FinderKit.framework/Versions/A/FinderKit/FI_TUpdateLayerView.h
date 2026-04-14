@class NSColor;

@interface FI_TUpdateLayerView : FI_TView

@property (retain, nonatomic) NSColor *backgroundColor;

- (void)setBackgroundColor:(id)a0;
- (void)initCommon;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
