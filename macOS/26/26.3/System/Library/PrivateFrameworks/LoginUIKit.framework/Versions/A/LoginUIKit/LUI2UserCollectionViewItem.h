@class NSString, LUI2UserView;

@interface LUI2UserCollectionViewItem : NSCollectionViewItem

@property (class, readonly) NSString *reuseIdentifier;

@property (retain) LUI2UserView *userView;
@property BOOL usesVisualEffectBackgroundUserView;

- (id)imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (id)textField;
- (void)setHighlightState:(long long)a0;
- (void)_updateSelectionHighlighting;

@end
