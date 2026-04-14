@class NSString, _TtC26CalendarIntegrationSupport17IntegrationServer;

@interface CISIntegrationServerModule : NSObject <CADModule> {
    _TtC26CalendarIntegrationSupport17IntegrationServer *server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)protectedDataDidBecomeAvailable;
- (id)init;
- (void)receivedAlarmNamed:(id)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (void)receivedNotificationNamed:(id)a0;
- (void)activate;
- (void)catchupSyncRequested;
- (void)regularSyncRequested;

@end
