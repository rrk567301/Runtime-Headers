@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (void)configureRosterQueryAPI;
- (void)configureAppsAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureAssetSupportAPI;
- (void)configureContextAPI;
- (void)configureDashboardAppAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureClassAPI;
- (void)configureStudentActivityAPI;
- (void)configureHandoutAPI;
- (void)configureQueryAPI;
- (void)configureSaveAPI;
- (void).cxx_destruct;
- (id)configureServerInterface;
- (void)configureDataObserverAPI;
- (void)configureCollaborationStateAPI;
- (void)configureUserNotificationAPI;
- (void)configureUtilityServerAPI;
- (void)configureRelayRequestAPI;
- (void)configureAdminRequestAPI;
- (void)configureCollectionsAPI;
- (id)init;
- (void)configureInsightEventsAPI;
- (void)configureProgressReportingAPI;
- (void)configureFeatureAvailabilityAPI;

@end
