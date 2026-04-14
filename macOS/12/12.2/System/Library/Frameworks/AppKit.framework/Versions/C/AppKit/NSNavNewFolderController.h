@class NSTextField, NSButton, NSLocalSavePanel;

@interface NSNavNewFolderController : NSWindowController {
    NSLocalSavePanel *_savePanel;
    NSTextField *_folderNameField;
    NSTextField *_errorMessage;
    NSButton *_cancelButton;
    NSButton *_okButton;
}

- (id)init;
- (BOOL)isRunning;
- (void)controlTextDidChange:(id)a0;
- (void)cancel:(id)a0;
- (void)ok:(id)a0;
- (id)_folderPath;
- (void)_updateOkButtonEnabledStateAndErrorMessage;
- (id)_defaultNewFolderName;
- (id)runModalForSavePanel:(id)a0;

@end
