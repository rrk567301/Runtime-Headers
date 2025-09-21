@interface NSButtonBezelView : NSWidgetView

@property (nonatomic) int vibrancyBlendMode;

- (void)updateLayer;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (int)_vibrancyBlendMode;

@end
