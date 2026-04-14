@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (void)configureUserNotificationAPI;
- (void)configureContextAPI;
- (void)configureClassAPI;
- (void)configureUtilityServerAPI;
- (void)configureDataObserverAPI;
- (void)configureAssetSupportAPI;
- (void)configureSaveAPI;
- (void)configureRelayRequestAPI;
- (id)configureServerInterface;
- (void)configureCollaborationStateAPI;
- (id)init;
- (void)configureDashboardAppAPI;
- (void)configureStudentActivityAPI;
- (void)configureQueryAPI;
- (void)configureHandoutAPI;
- (void)configureInsightEventsAPI;
- (void)configureAdminRequestAPI;
- (void)configureProgressReportingAPI;
- (void)configureCollectionsAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureRosterQueryAPI;
- (void)configureAuthorizationStatusAPI;
- (void).cxx_destruct;
- (void)configureFeatureAvailabilityAPI;
- (void)configureAppsAPI;

@end
