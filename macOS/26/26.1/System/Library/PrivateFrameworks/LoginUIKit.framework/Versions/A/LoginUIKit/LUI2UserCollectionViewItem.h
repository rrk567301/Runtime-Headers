@class NSString, LUI2UserView;

@interface LUI2UserCollectionViewItem : NSCollectionViewItem

@property (class, readonly) NSString *reuseIdentifier;

@property (retain) LUI2UserView *userView;
@property BOOL usesVisualEffectBackgroundUserView;

- (id)textField;
- (id)imageView;
- (void)setSelected:(BOOL)a0;
- (void)loadView;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)a0;
- (void)setHighlightState:(long long)a0;
- (void)_updateSelectionHighlighting;

@end
