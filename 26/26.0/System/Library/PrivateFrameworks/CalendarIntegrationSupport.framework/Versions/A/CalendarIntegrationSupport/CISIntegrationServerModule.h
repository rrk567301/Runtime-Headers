@class NSString, _TtC26CalendarIntegrationSupport17IntegrationServer;

@interface CISIntegrationServerModule : NSObject <CADModule> {
    _TtC26CalendarIntegrationSupport17IntegrationServer *server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (id)init;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (void)catchupSyncRequested;
- (void)regularSyncRequested;

@end
