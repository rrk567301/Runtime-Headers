@class NSString;

@interface CRKClassroomLockScreenMonitor_macOS : NSObject <CRKClassroomLockScreenMonitoring>

@property (nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObserving;
- (void)dealloc;
- (void)endObserving;
- (id)init;
- (void)classroomLockScreenWasHidden;
- (void)classroomLockScreenWasShown;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(id)a0 passcode:(id)a1;

@end
