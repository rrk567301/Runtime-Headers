@class NSString, LUI2UserView;

@interface LUI2UserCollectionViewItem : NSCollectionViewItem

@property (class, readonly) NSString *reuseIdentifier;

@property (retain) LUI2UserView *userView;
@property BOOL usesVisualEffectBackgroundUserView;

- (id)textField;
- (id)imageView;
- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)a0;
- (void)dealloc;
- (void)setHighlightState:(long long)a0;
- (void)_updateSelectionHighlighting;

@end
