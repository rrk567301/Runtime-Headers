@class NSObject;
@protocol OS_os_activity;

@interface ASCredentialRequestEnableBluetoothViewController : ASCredentialRequestPaneViewController {
    long long _mode;
    NSObject<OS_os_activity> *_authorizationActivity;
}

@property (copy, nonatomic) id /* block */ enableBluetoothHandler;

- (void)viewDidLoad;
- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (id)_message;
- (void)_enableBluetooth;
- (void)_setUpButtonPane;
- (void)_setUpHeaderPane;
- (id)initWithMode:(long long)a0 activity:(id)a1;
- (id)initWithPresentationContext:(id)a0 activity:(id)a1;

@end
