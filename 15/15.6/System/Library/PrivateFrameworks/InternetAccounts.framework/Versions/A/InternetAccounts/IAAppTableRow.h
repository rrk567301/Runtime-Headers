@class NSTextField, NSString, NSImageView, IAApplication, NSProgressIndicator, NSButton, NSImage;

@interface IAAppTableRow : NSTableRowView {
    NSButton *_checkbox;
    NSTextField *_appNameField;
    NSTextField *_secondaryTextField;
    NSImageView *_icon;
    NSProgressIndicator *_spinner;
    NSImage *_originalIcon;
    char _controlsAreDisabled;
}

@property (retain, nonatomic) IAApplication *application;
@property (retain) NSString *serviceDisplayName;
@property (retain) NSString *appDisplayName;
@property (retain, nonatomic) NSString *secondaryText;
@property (retain) id delegate;
@property char disableControls;
@property char spinOnSelection;

+ (id)createFromNib;

- (void)dealloc;
- (void).cxx_destruct;
- (void)select;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deselect;
- (void)startSpinner;
- (void)stopSpinner;
- (char)isSpinning;
- (void)checkboxClicked:(id)a0;
- (void)syncUI;

@end
