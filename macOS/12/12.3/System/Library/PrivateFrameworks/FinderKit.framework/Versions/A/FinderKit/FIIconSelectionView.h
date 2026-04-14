@class NSVisualEffectView;

@interface FIIconSelectionView : FI_TIconSelectionView {
    NSVisualEffectView *_visualEffectView;
}

@property (nonatomic) int style;

- (void).cxx_destruct;
- (void)updateLayer;
- (id)_backgroundColor;
- (double)_cornerRadius;

@end
