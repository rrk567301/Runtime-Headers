@class NSString;

@interface CADStateDumpModule : NSObject <CADModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (void)deactivate;
- (void)activate;
- (id)_storeTypeStringFromType:(int)a0;
- (void)registerForStateCapture;

@end
