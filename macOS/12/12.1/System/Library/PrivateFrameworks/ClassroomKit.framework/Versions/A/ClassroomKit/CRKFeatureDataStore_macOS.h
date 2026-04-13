@class NSSet, NSString, CRKFeatureDataStoreHeuristics_macOS;
@protocol CRKMCXPrimitives, CRKFeatureDataStoreProtocol;

@interface CRKFeatureDataStore_macOS : NSObject <CRKSharedFeatureDataStoreProviding, CRKFeatureDataStoreProtocol>

@property (class, readonly, nonatomic) id<CRKFeatureDataStoreProtocol> sharedDataStore;

@property (readonly, nonatomic) id<CRKMCXPrimitives> MCXPrimitives;
@property (copy, nonatomic) NSSet *activeClassroomRoles;
@property (retain, nonatomic) CRKFeatureDataStoreHeuristics_macOS *heuristicsManager;
@property (readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) BOOL classroomUnpromptedScreenObservationForced;
@property (readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) BOOL classroomAutomaticClassJoiningForced;
@property (readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) BOOL classroomRequestPermissionToLeaveClassesForced;
@property (nonatomic, getter=isClassroomStudentRoleEnabled) BOOL classroomStudentRoleEnabled;
@property (nonatomic, getter=isClassroomInstructorRoleEnabled) BOOL classroomInstructorRoleEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFeatureForced:(id)a0;
- (unsigned long long)boolRestrictionForFeature:(id)a0;
- (id)initWithMCXPrimitives:(id)a0;
- (void)removeDuplicateEntriesFromStoredClassroomRoles;
- (unsigned long long)effectiveValueForSetting:(id)a0 configurationUUID:(id)a1 outAsk:(BOOL *)a2;
- (void)setBoolValue:(BOOL)a0 ask:(BOOL)a1 forSetting:(id)a2 configurationUUID:(id)a3;
- (id)keyForFeature:(id)a0 configurationUUID:(id)a1 ask:(BOOL)a2;
- (BOOL)isRoleEnabled:(id)a0;
- (void)setRole:(id)a0 enabled:(BOOL)a1;
- (void)addActiveClassroomRole:(id)a0;
- (void)removeActiveClassroomRole:(id)a0;
- (unsigned long long)effectiveBoolValueForSetting:(id)a0 outAsk:(BOOL *)a1;
- (void)setBoolValue:(BOOL)a0 ask:(BOOL)a1 forSetting:(id)a2;

@end
