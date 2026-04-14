@class NSArray, NSStackView;

@interface PerSitePreferencesPopoverViewController : TitleAndStackViewController {
    NSStackView *_checkBoxElementStackView;
}

@property (copy, nonatomic) NSArray *checkBoxElements;

- (void)updateView;
- (void).cxx_destruct;

@end
