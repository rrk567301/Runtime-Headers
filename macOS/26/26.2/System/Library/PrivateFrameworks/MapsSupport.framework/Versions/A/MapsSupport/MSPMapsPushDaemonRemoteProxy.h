@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)clearParkedCarBulletin;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)_clearConnection;
- (void)_connectToDaemonIfNeeded;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (id)_connection;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)removeObserver:(id)a0;
- (void)clearCurrentAnnouncement;
- (id)_remoteObjectProxy;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)addObserver:(id)a0;
- (void)closeConnection;
- (void)clearMapsSuggestionsBulletin;
- (void)resetAnnouncements;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)addSufficientVisitsNotification:(id)a0 message:(id)a1;
- (void)simulateProblemResolution;
- (void).cxx_destruct;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)clearLowFuelAlertBulletin;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)clearVenueBulletin;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (id)init;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)simulateRAPStatusChangeNotification;

@end
