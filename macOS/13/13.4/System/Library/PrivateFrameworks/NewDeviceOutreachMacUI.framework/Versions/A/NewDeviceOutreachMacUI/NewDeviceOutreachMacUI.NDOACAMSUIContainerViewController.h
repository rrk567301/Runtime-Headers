@interface NewDeviceOutreachMacUI.NDOACAMSUIContainerViewController : NSViewController <NDOACAMSUIViewPresenterProtocol> {
    void /* unknown type, empty encoding */ warranty;
    void /* unknown type, empty encoding */ serialNumber;
    void /* unknown type, empty encoding */ presentationType;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ presenter;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ detailsTextView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ buttonStackView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ continueButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ notNowButton;

- (void)amsUIViewFinishedWithCompletion:(long long)a0;
- (void)amsUIViewFinishedWithCompletion:(long long)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)notNowPressed:(id)a0;
- (void)getAppleCarePressed:(id)a0;

@end
