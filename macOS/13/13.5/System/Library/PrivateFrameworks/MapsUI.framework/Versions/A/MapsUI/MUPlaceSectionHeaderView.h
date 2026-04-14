@class NSButton, MUPlaceSectionHeaderViewModel, NSTextField;

@interface MUPlaceSectionHeaderView : NSView {
    NSTextField *_titleLabel;
    NSButton *_seeAllButton;
    MUPlaceSectionHeaderViewModel *_headerViewModel;
}

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_setupHeader;

@end
