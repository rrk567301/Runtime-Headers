@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {
    TLAlert *_alert;
    _Atomic long long _activeAcquisitionCount;
}

- (void)relinquish;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)acquire;
- (void)_acquire;
- (void)_relinquish;
- (id)initWithAlert:(id)a0;

@end
