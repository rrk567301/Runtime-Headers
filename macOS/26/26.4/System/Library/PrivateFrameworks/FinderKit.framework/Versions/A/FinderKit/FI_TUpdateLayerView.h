@class NSColor;

@interface FI_TUpdateLayerView : FI_TView

@property (retain, nonatomic) NSColor *backgroundColor;

- (void)updateLayer;
- (void)initCommon;
- (void)setBackgroundColor:(id)a0;
- (BOOL)wantsUpdateLayer;

@end
