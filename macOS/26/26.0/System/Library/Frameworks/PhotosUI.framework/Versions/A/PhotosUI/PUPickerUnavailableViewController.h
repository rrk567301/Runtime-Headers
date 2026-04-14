@class NSTextField, PHPickerConfiguration, NSProgressIndicator, NSError, NSStackView, NSButton;
@protocol _PUPickerUnavailableViewControllerDelegate;

@interface PUPickerUnavailableViewController : NSViewController

@property (readonly, nonatomic) NSStackView *unavailableView;
@property (readonly, nonatomic) NSProgressIndicator *progressIndicator;
@property (readonly, nonatomic) NSTextField *messageTextField;
@property (readonly, nonatomic) NSButton *cancelButton;
@property (readonly, nonatomic) NSButton *actionButton;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) PHPickerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSError *error;
@property (weak, nonatomic) id<_PUPickerUnavailableViewControllerDelegate> delegate;

+ (id)unavailableViewController:(unsigned long long)a0 configuration:(id)a1 error:(id)a2 delegate:(id)a3;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)askDelegateToCancel;
- (void)askDelegateToRetry;
- (id)initWithReason:(unsigned long long)a0 configuration:(id)a1 error:(id)a2;
- (id)reasonDebugDescription;
- (id)unavailableButtonTitle;
- (id)unavailableKey;
- (id)unavailableMessage;
- (id)unavailableTitle;
- (void)updateReason:(unsigned long long)a0 error:(id)a1;
- (void)updateUnavailableView;

@end
