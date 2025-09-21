@class NSString, NSArray, CRKASMRosterUpdater, CRKASMCertificateIngestor, CRKASMWorldBuildOperation, CRKClassKitChangeNotifier, CRKASMRosterProviderEnvironment;
@protocol CRKASMUserFetching, CRKASMRoster;

@interface CRKASMConcreteRosterProvider : NSObject <CRKClassKitChangeNotifierDelegate, CRKASMRosterProviding>

@property (retain, nonatomic) id<CRKASMRoster> roster;
@property (nonatomic, getter=isPopulated) char populated;
@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSArray *locationsWithManagePermissions;
@property (readonly, nonatomic) CRKASMCertificateIngestor *certificateIngestor;
@property (readonly, nonatomic) CRKClassKitChangeNotifier *classKitChangeNotifier;
@property (retain, nonatomic) CRKASMWorldBuildOperation *worldBuildOperation;
@property (readonly, nonatomic) CRKASMRosterUpdater *rosterUpdater;
@property (readonly, nonatomic) CRKASMRosterProviderEnvironment *environment;
@property (readonly, nonatomic) id<CRKASMUserFetching> userFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)refresh;
- (id)studentDirectoryForLocationIDs:(id)a0;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (char)ingestCertificates:(id)a0 forTrustedUserIdentifier:(id)a1 error:(id *)a2;
- (id)instructorDirectoryForLocationIDs:(id)a0;
- (void)logDurationOfOperation:(id)a0;
- (void)notifierDidObserveClassKitChange:(id)a0;
- (void)processFinishedWorldBuild:(id)a0;
- (void)removeCourseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)startNewWorldBuild;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)updateManageableLocations:(id)a0;
- (void)updateRoster:(id)a0 outTrustedPersonIDsChanged:(char *)a1;
- (void)worldBuildDidFinish:(id)a0;

@end
