@class NSAlert, NSMutableArray;

@interface VUIAlertController : NSObject

@property (retain, nonatomic) NSAlert *alert;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSMutableArray *actions;

+ (id)vui_alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

- (void).cxx_destruct;
- (char)_canShowWhileLocked;
- (char)overridesOrientationLock;
- (void)vui_addAction:(id)a0;
- (void)vui_addAction:(id)a0 isPreferred:(char)a1;
- (void)vui_dismissViewControllerAnimated:(char)a0 completion:(id /* block */)a1;
- (void)vui_presentAlertFromPresentingController:(id)a0 animated:(char)a1 completion:(id /* block */)a2;

@end
