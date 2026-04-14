@class NSTextField, NSImageView, ClearBrowsingDataController, NSProgressIndicator, NSPopUpButton, NSButton;

@interface ClearBrowsingDataPanelController : NSWindowController {
    long long _scope;
    ClearBrowsingDataController *_clearBrowsingDataController;
}

@property (weak, nonatomic) NSTextField *messageTextField;
@property (weak, nonatomic) NSPopUpButton *timePeriodPopUp;
@property (weak, nonatomic) NSTextField *informativeTextField;
@property (weak, nonatomic) NSTextField *clearTextField;
@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *clearHistoryButton;
@property (weak, nonatomic) NSButton *helpButton;
@property (weak, nonatomic) NSImageView *safariAppIcon;

+ (void)runModalPanelWithScope:(long long)a0 fromTrigger:(id)a1;

- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)awakeFromNib;
- (id)windowNibName;
- (id)initWithScope:(long long)a0;
- (void)helpButtonClicked:(id)a0;
- (void)clearBrowsingDataClicked:(id)a0;
- (void)_setUpPanel;
- (void)_clearBrowsingDataWithCompletionHandler:(id /* block */)a0;

@end
