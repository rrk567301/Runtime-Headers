@class NSHashTable, NSArray, CATRemoteTaskOperation, NSSet, NSString, NSDictionary, CRKSecureCodedUserDefaultsObject, CRKStudentDaemonProxy;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider> {
    CATRemoteTaskOperation *mBrowseOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    BOOL mConfigurationFetched;
}

@property (class, readonly, nonatomic) CRKCourseEnrollmentController *sharedEnrollmentController;

@property (copy, nonatomic) NSArray *courses;
@property (copy, nonatomic) NSArray *courseInvitations;
@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers;
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;
@property (nonatomic) unsigned long long configurationType;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchActiveInstructorsOperation;
@property (copy, nonatomic) NSSet *activeInstructors;
@property (nonatomic) BOOL settingsUIVisible;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy;
@property (readonly, nonatomic) long long iCloudAccountStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsRemoteLearning;

+ (id)keyPathsForValuesAffectingSupportsRemoteLearning;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)daemonProxyDidConnect:(id)a0;
- (void)daemonProxyDidDisconnect:(id)a0;
- (void)daemonProxy:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)disconnectOperationDidFinish:(id)a0;
- (void)fetchConfigurationTypeOperationDidFinish:(id)a0;
- (void)fetchCoursesOperationDidFinish:(id)a0;
- (void)fetchCourseInvitationsOperationDidFinish:(id)a0;
- (void)fetchActiveInstructorsOperationDidFinish:(id)a0;
- (BOOL)isCourseActive:(id)a0;
- (BOOL)isStudentScreenBeingObservedForCourse:(id)a0;
- (BOOL)isInstructorWithIdentifier:(id)a0 disconnectableForCourse:(id)a1;
- (BOOL)isInstructorWithIdentifier:(id)a0 activeForCourse:(id)a1;
- (BOOL)isInstructorWithIdentifier:(id)a0 observingStudentScreenForCourse:(id)a1;
- (void)disconnectInstructorWithIdentifier:(id)a0 forCourse:(id)a1;
- (id)instructorUsersForCourse:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0;
- (void)addEnrollmentObserver:(id)a0;
- (id)courseWithIdentifier:(id)a0;
- (id)invitationWithCourseIdentifier:(id)a0;
- (void)startLongRunningOperations;
- (void)stopLongRunningOperations;
- (void)updateInvitationBrowsingStatus;
- (BOOL)canBrowseForInvitations;
- (void)startBrowsingForInvitations;
- (void)stopBrowsingForInvitations;
- (void)fetchConfiguration;
- (void)fetchCourses;
- (void)fetchStoredCourses;
- (void)storeCourses;
- (void)fetchCourseInvitations;
- (void)fetchActiveInstructors;
- (BOOL)updateScreenObservingInstructors;
- (id)coursesBySortingCourses:(id)a0;
- (id)activeCourses;
- (id)activeCourseIdentifiers;
- (id)activeInstructorsWithIdentifier:(id)a0 forCourse:(id)a1;
- (BOOL)instructor:(id)a0 isForCourse:(id)a1;
- (id)anonymousInstructorUsersForCourse:(id)a0;
- (id)syntheticUserForAnonymousInstructor:(id)a0;
- (void)updateSettingsUIVisibility;
- (id)observersRespondingToSelector:(SEL)a0;
- (void)didUpdateSettingsUIVisibility;
- (void)didUpdateCourses;
- (void)didUpdateActiveCourses;
- (void)didUpdateInvitations;
- (void)invitationWithIdentifierDidFail:(id)a0 withLocalizedReason:(id)a1;

@end
