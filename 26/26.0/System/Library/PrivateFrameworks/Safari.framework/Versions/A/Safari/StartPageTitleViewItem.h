@class NSTextField, NSAppearance, NSButton, NSStackView;
@protocol StartPageTitleViewItemDelegate;

@interface StartPageTitleViewItem : NSCollectionViewItem {
    NSTextField *_titleLabel;
    NSButton *_backButton;
    NSStackView *_contentStackView;
}

@property (retain, nonatomic) NSAppearance *appearance;
@property (weak, nonatomic) id<StartPageTitleViewItemDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_goBack:(id)a0;
- (void)_makeContentView;
- (void)configureViewWithTitle:(id)a0;

@end
