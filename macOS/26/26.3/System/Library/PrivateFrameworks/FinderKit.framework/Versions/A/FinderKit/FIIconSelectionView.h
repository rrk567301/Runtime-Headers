@class NSVisualEffectView;

@interface FIIconSelectionView : FI_TIconSelectionView {
    NSVisualEffectView *_visualEffectView;
}

@property (nonatomic) int style;

- (double)_cornerRadius;
- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)updateLayer;

@end
