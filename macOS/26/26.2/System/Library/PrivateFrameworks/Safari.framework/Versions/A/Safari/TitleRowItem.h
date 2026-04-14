@class NSString, NSTextField;

@interface TitleRowItem : NSCollectionViewItem {
    NSTextField *_textField;
}

@property (weak, nonatomic) NSString *titleText;

- (void)loadView;
- (void).cxx_destruct;

@end
