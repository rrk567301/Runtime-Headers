@class _TtC18ScreenReaderOutput27BRUILiveCaptionsCallManager;

@interface ScreenReaderOutput.BRUILiveCaptionsCallManager : NSObject {
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ callQueue;
    void /* unknown type, empty encoding */ _currentCallEvent;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ newObservers;
    void /* unknown type, empty encoding */ _currentCallCount;
    void /* unknown type, empty encoding */ _currentVideoCallCount;
}

@property (class, nonatomic, readonly) _TtC18ScreenReaderOutput27BRUILiveCaptionsCallManager *shared;

- (id)init;
- (void).cxx_destruct;
- (void)handleCallStatusChanged:(id)a0;

@end
