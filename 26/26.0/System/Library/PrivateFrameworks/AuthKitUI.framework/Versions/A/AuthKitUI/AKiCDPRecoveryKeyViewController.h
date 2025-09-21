@class NSTextField, NSString, OBTemplateView, NSView, NSLayoutConstraint, IASFakeLinkButton;
@protocol AKiCDPRecoveryKeyDelegate, MBSecondPartyHost;

@interface AKiCDPRecoveryKeyViewController : NSViewController

@property (nonatomic) id<AKiCDPRecoveryKeyDelegate> delegate;
@property (nonatomic) id<MBSecondPartyHost> assistant;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (weak, nonatomic) NSLayoutConstraint *titleLabelCenterXConstraint;
@property (weak, nonatomic) NSLayoutConstraint *errorLabelCenterXConstraint;
@property (weak, nonatomic) NSLayoutConstraint *escapeButtonCenterXButton;
@property (weak, nonatomic) NSLayoutConstraint *progressViewCenterXConstraint;
@property (weak, nonatomic) NSLayoutConstraint *recoveryKeyTextFieldCenterXConstraint;
@property (weak, nonatomic) NSTextField *titleTextField;
@property (weak, nonatomic) NSTextField *errorTextField;
@property (weak, nonatomic) IASFakeLinkButton *escapeButton;
@property (retain, nonatomic) NSTextField *recoveryKeyTextField;
@property (retain, nonatomic) NSView *progressView;
@property (retain, nonatomic) NSString *recoveryKey;
@property (nonatomic) BOOL showErrorString;
@property (nonatomic) BOOL recoveryKeyTextFieldEnabled;
@property (nonatomic) BOOL noRecoveryKeyButtonVisible;
@property (nonatomic) BOOL noRecoveryKeyButtonEnabled;

- (void)controlTextDidChange:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithDelegate:(id)a0 assistant:(id)a1;
- (void)noRecoveryKeyButtonPressed:(id)a0;
- (void)recoveryTextFieldAction:(id)a0;
- (void)startRecoveryKeyFlow;
- (void)validateRecoveryKey;

@end
