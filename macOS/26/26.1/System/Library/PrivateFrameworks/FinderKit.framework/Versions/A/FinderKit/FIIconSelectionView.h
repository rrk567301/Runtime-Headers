@class NSVisualEffectView;

@interface FIIconSelectionView : FI_TIconSelectionView {
    NSVisualEffectView *_visualEffectView;
}

@property (nonatomic) int style;

- (double)_cornerRadius;
- (id)_backgroundColor;
- (void).cxx_destruct;
- (void)updateLayer;

@end
