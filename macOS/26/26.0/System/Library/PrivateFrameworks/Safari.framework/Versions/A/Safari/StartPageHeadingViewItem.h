@class NSString, NSAppearance, NSTextField;

@interface StartPageHeadingViewItem : NSCollectionViewItem {
    NSTextField *_label;
    NSString *_initialTitle;
    NSAppearance *_appearance;
}

- (void)loadView;
- (void)setAppearance:(id)a0;
- (id)title;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;

@end
