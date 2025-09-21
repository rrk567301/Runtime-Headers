@class CUSystemMonitor;

@interface ULDisplayMonitor_OSX : ULEventMonitor

@property (retain, nonatomic) CUSystemMonitor *systemMonitor;
@property (nonatomic) char screenOn;
@property (nonatomic) char clamshellMode;
@property (nonatomic) char screenLocked;

- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)_activateWithCompletion;
- (char)_checkClamshellMode;
- (char)_checkScreenLocked;
- (char)_checkScreenOn;
- (void)_clamshellModeChangedHandler;
- (void)_invalidationHandler;
- (void)_screenLockedChangedHandler;
- (void)_screenOnChangedHandler;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
