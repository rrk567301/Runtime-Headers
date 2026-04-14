@class NSString, _TtC26CalendarIntegrationSupport17IntegrationServer;

@interface CISIntegrationServerModule : NSObject <CADModule> {
    _TtC26CalendarIntegrationSupport17IntegrationServer *server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)a0;
- (void)activate;
- (void)deactivate;
- (void).cxx_destruct;
- (id)init;
- (void)catchupSyncRequested;
- (void)regularSyncRequested;

@end
