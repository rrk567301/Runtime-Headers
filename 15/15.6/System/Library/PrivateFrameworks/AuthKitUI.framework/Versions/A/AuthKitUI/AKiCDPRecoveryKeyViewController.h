@class NSTextField, NSString, OBTemplateView, NSView;
@protocol AKiCDPRecoveryKeyDelegate, MBSecondPartyHost;

@interface AKiCDPRecoveryKeyViewController : NSViewController

@property (nonatomic) id<AKiCDPRecoveryKeyDelegate> delegate;
@property (nonatomic) id<MBSecondPartyHost> assistant;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (retain, nonatomic) NSTextField *recoveryKeyTextField;
@property (retain, nonatomic) NSView *progressView;
@property (retain, nonatomic) NSString *recoveryKey;
@property (nonatomic) char showErrorString;
@property (nonatomic) char recoveryKeyTextFieldEnabled;
@property (nonatomic) char noRecoveryKeyButtonVisible;
@property (nonatomic) char noRecoveryKeyButtonEnabled;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (id)initWithDelegate:(id)a0 assistant:(id)a1;
- (void)noRecoveryKeyButtonPressed:(id)a0;
- (void)recoveryTextFieldAction:(id)a0;
- (void)startRecoveryKeyFlow;
- (void)validateRecoveryKey;

@end
