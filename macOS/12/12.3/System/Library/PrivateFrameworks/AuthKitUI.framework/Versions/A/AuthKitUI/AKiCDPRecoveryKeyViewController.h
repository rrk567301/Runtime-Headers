@class NSTextField, NSString, OBTemplateView, NSView;
@protocol AKiCDPRecoveryKeyDelegate, MBSecondPartyHost;

@interface AKiCDPRecoveryKeyViewController : NSViewController

@property id<AKiCDPRecoveryKeyDelegate> delegate;
@property id<MBSecondPartyHost> assistant;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (retain) NSTextField *recoveryKeyTextField;
@property (retain) NSView *progressView;
@property (retain) NSString *recoveryKey;
@property BOOL showErrorString;
@property BOOL recoveryKeyTextFieldEnabled;
@property BOOL noRecoveryKeyButtonVisible;
@property BOOL noRecoveryKeyButtonEnabled;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (id)initWithDelegate:(id)a0 assistant:(id)a1;
- (void)startRecoveryKeyFlow;
- (void)validateRecoveryKey;
- (void)recoveryTextFieldAction:(id)a0;
- (void)noRecoveryKeyButtonPressed:(id)a0;

@end
