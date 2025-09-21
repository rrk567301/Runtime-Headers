@class NSString;
@protocol CalAppEntityNotifier;

@interface CADAppEntityNotifierModule : NSObject <CADModule> {
    id<CalAppEntityNotifier> _notifier;
    BOOL _isActive;
}

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
- (void).cxx_destruct;
- (id)initWithAppEntityNotifier:(id)a0;

@end
