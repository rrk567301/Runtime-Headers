@class NSString, CSKActivity;

@interface CSKActivityHeaderViewController : CSKHeaderViewController <CSKExtendedTextFieldDelegate>

@property (weak, nonatomic) CSKActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)_updateHeaderViewsWithActivity:(id)a0;
- (void)extendedTextFieldDidSwitch:(id)a0 showsAlternate:(BOOL)a1;

@end
