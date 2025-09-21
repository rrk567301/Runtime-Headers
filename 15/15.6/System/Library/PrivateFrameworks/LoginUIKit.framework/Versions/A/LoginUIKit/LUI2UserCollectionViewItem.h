@class NSString, LUI2UserView;

@interface LUI2UserCollectionViewItem : NSCollectionViewItem

@property (class, readonly) NSString *reuseIdentifier;

@property (retain) LUI2UserView *userView;
@property char usesVisualEffectBackgroundUserView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)a0;
- (id)imageView;
- (void)loadView;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(char)a0;
- (id)textField;
- (void)_updateSelectionHighlighting;

@end
