@class NSButton, NSString, NSTextField;
@protocol AKSignatureCustomDescriptionDelegate;

@interface AKSignatureDescriptionInputViewController_Mac : NSViewController

@property (retain) NSButton *doneButton;
@property (retain) NSTextField *inputTextField;
@property (copy) NSString *customDescription;
@property (weak) id<AKSignatureCustomDescriptionDelegate> customDescriptionDelegate;

- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (id)initWithDescription:(id)a0;
- (void)done:(id)a0;
- (void).cxx_destruct;
- (BOOL)control:(id)a0 textShouldBeginEditing:(id)a1;
- (id)nibName;
- (id)nibBundle;

@end
