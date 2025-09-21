@class FBSDisplayLayoutMonitor, NSString;

@interface ULDisplayMonitor : ULEventMonitor

@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMinitor;
@property (retain, nonatomic) NSString *appInFocus;
@property (nonatomic) char displayOn;
@property (nonatomic) char screenLocked;

- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)stopMonitoring:(id)a0;
- (id)_checkAppInFocusFromLayout:(id)a0;
- (char)_checkDisplayOnFromLayout:(id)a0;
- (char)_checkScreenLockedFromLayout:(id)a0;
- (void)_didUpdateDisplayLayout:(id)a0;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
