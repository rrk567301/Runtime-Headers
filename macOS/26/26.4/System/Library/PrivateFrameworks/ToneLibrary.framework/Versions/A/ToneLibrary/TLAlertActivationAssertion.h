@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {
    TLAlert *_alert;
    _Atomic long long _activeAcquisitionCount;
}

- (void)acquire;
- (void).cxx_destruct;
- (id)description;
- (void)relinquish;
- (void)dealloc;
- (void)_acquire;
- (void)_relinquish;
- (id)initWithAlert:(id)a0;

@end
