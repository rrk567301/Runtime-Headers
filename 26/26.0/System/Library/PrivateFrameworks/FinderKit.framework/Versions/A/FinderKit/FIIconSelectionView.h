@class NSVisualEffectView;

@interface FIIconSelectionView : FI_TIconSelectionView {
    NSVisualEffectView *_visualEffectView;
}

@property (nonatomic) int style;

- (void)updateLayer;
- (double)_cornerRadius;
- (id)_backgroundColor;
- (void).cxx_destruct;

@end
