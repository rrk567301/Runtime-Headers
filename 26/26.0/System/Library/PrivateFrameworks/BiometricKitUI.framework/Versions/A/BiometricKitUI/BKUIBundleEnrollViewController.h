@class NSObject;
@protocol OS_os_log;

@interface BKUIBundleEnrollViewController : BiometricKitUIEnrollViewController {
    long long _shortScanCount;
    long long _maxShortScanCount;
    NSObject<OS_os_log> *bkui_bundle_enroll_view_controller_log;
}

- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)statusMessage:(unsigned int)a0;
- (void).cxx_destruct;
- (id)bundleAlertView;
- (void)afterStatusMessage:(unsigned int)a0;
- (void)displayAlertMessageWithTitle:(id)a0 prompt:(id)a1;

@end
