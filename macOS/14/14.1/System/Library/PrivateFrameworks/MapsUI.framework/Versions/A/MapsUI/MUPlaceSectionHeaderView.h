@class NSTextField, NSString, MUPlaceSectionHeaderViewModel, NSButton;

@interface MUPlaceSectionHeaderView : NSView <MUActivityObserving> {
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSButton *_seeAllButton;
    MUPlaceSectionHeaderViewModel *_headerViewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_setupHeader;

@end
