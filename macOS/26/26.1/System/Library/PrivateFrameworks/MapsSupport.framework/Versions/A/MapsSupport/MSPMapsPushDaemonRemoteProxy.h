@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)_remoteObjectProxy;
- (void)closeConnection;
- (id)_connection;
- (void)_clearConnection;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)_connectToDaemonIfNeeded;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)clearLowFuelAlertBulletin;
- (void)simulateRAPStatusChangeNotification;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)resetAnnouncements;
- (void)clearParkedCarBulletin;
- (void)addSufficientVisitsNotification:(id)a0 message:(id)a1;
- (void)clearCurrentAnnouncement;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)clearVenueBulletin;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void).cxx_destruct;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)clearMapsSuggestionsBulletin;
- (void)removeObserver:(id)a0;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)simulateProblemResolution;
- (id)init;
- (void)addObserver:(id)a0;
- (void)clearBulletinWithRecordID:(id)a0;

@end
