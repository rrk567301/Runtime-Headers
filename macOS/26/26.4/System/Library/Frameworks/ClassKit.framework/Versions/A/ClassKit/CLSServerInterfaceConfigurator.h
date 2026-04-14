@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (void)configureAdminRequestAPI;
- (void)configureInsightEventsAPI;
- (void)configureClassAPI;
- (id)configureServerInterface;
- (void)configureCollectionsAPI;
- (void)configureUtilityServerAPI;
- (void)configureUserNotificationAPI;
- (void)configureHandoutAPI;
- (void)configureAppsAPI;
- (void)configureRelayRequestAPI;
- (void)configureDashboardAppAPI;
- (void)configureContextAPI;
- (void).cxx_destruct;
- (void)configureFeatureAvailabilityAPI;
- (void)configureStudentActivityAPI;
- (void)configureProgressReportingAPI;
- (id)init;
- (void)configureDataObserverAPI;
- (void)configureSaveAPI;
- (void)configureQueryAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureAssetSupportAPI;
- (void)configureCollaborationStateAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureRosterQueryAPI;

@end
