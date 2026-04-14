@class NSString, NSAppearance, NSTextField;

@interface StartPageHeadingViewItem : NSCollectionViewItem {
    NSTextField *_label;
    NSString *_initialTitle;
    NSAppearance *_appearance;
}

- (void)loadView;
- (id)title;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setAppearance:(id)a0;

@end
