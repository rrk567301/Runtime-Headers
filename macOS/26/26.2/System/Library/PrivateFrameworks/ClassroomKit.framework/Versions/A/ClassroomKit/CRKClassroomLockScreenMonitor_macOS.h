@class NSString;

@interface CRKClassroomLockScreenMonitor_macOS : NSObject <CRKClassroomLockScreenMonitoring>

@property (nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;
@property (nonatomic, getter=isClassroomLockScreenActivated) BOOL classroomLockScreenActivated;
@property (nonatomic) BOOL classroomLockScreenWantsToDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endObserving;
- (void)startObserving;
- (id)init;
- (void)dealloc;
- (void)classroomLockScreenWasHidden;
- (void)classroomLockScreenWasShown;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(id)a0 passcode:(id)a1;

@end
