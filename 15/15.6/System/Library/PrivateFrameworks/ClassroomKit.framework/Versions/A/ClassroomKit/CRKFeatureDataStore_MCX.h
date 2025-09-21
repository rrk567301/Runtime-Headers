@class NSSet, NSString, CRKFeatureDataStoreHeuristics_MCX;
@protocol CRKMCXPrimitives;

@interface CRKFeatureDataStore_MCX : NSObject <CRKFeatureDataStoreProtocol>

@property (readonly, nonatomic) id<CRKMCXPrimitives> MCXPrimitives;
@property (copy, nonatomic) NSSet *activeClassroomRoles;
@property (retain, nonatomic) CRKFeatureDataStoreHeuristics_MCX *heuristicsManager;
@property (readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) char classroomUnpromptedScreenObservationForced;
@property (readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) char classroomAutomaticClassJoiningForced;
@property (readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) char classroomRequestPermissionToLeaveClassesForced;
@property (nonatomic, getter=isClassroomStudentRoleEnabled) char classroomStudentRoleEnabled;
@property (nonatomic, getter=isClassroomInstructorRoleEnabled) char classroomInstructorRoleEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addActiveClassroomRole:(id)a0;
- (unsigned long long)boolRestrictionForFeature:(id)a0;
- (unsigned long long)effectiveBoolValueForSetting:(id)a0 outAsk:(char *)a1;
- (unsigned long long)effectiveValueForSetting:(id)a0 configurationUUID:(id)a1 outAsk:(char *)a2;
- (id)initWithMCXPrimitives:(id)a0;
- (char)isFeatureForced:(id)a0;
- (char)isRoleEnabled:(id)a0;
- (id)keyForFeature:(id)a0 configurationUUID:(id)a1 ask:(char)a2;
- (void)removeActiveClassroomRole:(id)a0;
- (void)removeDuplicateEntriesFromStoredClassroomRoles;
- (void)setBoolValue:(char)a0 ask:(char)a1 forSetting:(id)a2;
- (void)setBoolValue:(char)a0 ask:(char)a1 forSetting:(id)a2 configurationUUID:(id)a3;
- (void)setRole:(id)a0 enabled:(char)a1;

@end
