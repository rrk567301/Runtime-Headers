@class NSTextField, NSPopUpButton;

@interface QCNumberFormatterUI : QCInspector {
    NSPopUpButton *styleMenu;
    NSTextField *formatField;
}

+ (id)viewNibName;

- (void)update:(id)a0;
- (void)setupViewForPatch:(id)a0;
- (void)_configureFormatEditor;

@end
