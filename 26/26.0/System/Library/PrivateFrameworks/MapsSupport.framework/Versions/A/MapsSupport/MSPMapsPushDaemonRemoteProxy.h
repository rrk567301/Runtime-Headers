@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)_clearConnection;
- (void)closeConnection;
- (id)_connection;
- (void)resetAnnouncements;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)_connectToDaemonIfNeeded;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (id)_remoteObjectProxy;
- (void)clearLowFuelAlertBulletin;
- (void)removeObserver:(id)a0;
- (void)simulateProblemResolution;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)simulateRAPStatusChangeNotification;
- (void)addSufficientVisitsNotification:(id)a0 message:(id)a1;
- (id)init;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearParkedCarBulletin;
- (void)clearCurrentAnnouncement;
- (void)clearVenueBulletin;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)addObserver:(id)a0;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)clearMapsSuggestionsBulletin;
- (void).cxx_destruct;

@end
