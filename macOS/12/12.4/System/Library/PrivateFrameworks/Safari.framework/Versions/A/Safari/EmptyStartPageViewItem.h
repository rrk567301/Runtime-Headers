@class NSImageView, NSTextField;

@interface EmptyStartPageViewItem : StartPageViewItem {
    NSTextField *_description;
    NSImageView *_icon;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)configureViewWithDescription:(id)a0 imageName:(id)a1;

@end
