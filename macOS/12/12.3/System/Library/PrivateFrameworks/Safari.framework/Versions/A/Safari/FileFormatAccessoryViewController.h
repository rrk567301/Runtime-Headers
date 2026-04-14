@class NSTextField, NSString, NSArray, NSPopUpButton;

@interface FileFormatAccessoryViewController : NSViewController

@property (weak, nonatomic) NSPopUpButton *popUpButton;
@property (weak, nonatomic) NSTextField *pageSourceDescriptionLabel;
@property (weak, nonatomic) NSTextField *webArchiveDescriptionLabel;
@property (nonatomic) int fileFormat;
@property (copy, nonatomic) NSString *rawSourceMIMEType;
@property (readonly, copy, nonatomic) NSArray *allowedMIMETypes;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)_updatePopUpButton;
- (void)_updateContentTypes;
- (void)_updateInformationText;
- (void)popUpButtonUpdated:(id)a0;

@end
