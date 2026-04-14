@class NSString, NSAppearance, NSTextField;

@interface StartPageHeadingViewItem : NSCollectionViewItem {
    NSTextField *_label;
    NSString *_initialTitle;
    NSAppearance *_appearance;
}

- (void)setAppearance:(id)a0;
- (void)setTitle:(id)a0;
- (void)loadView;
- (id)title;
- (void).cxx_destruct;

@end
