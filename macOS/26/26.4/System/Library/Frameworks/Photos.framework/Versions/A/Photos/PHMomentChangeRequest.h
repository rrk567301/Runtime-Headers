@class NSString, NSArray, NSMutableArray, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHMomentChangeRequest : PHChangeRequest <PHUpdateChangeRequest>

@property (retain, nonatomic) NSMutableArray *assetSearchEntities;
@property (retain, nonatomic) NSMutableArray *themeAssignments;
@property (nonatomic) BOOL shouldClearThemeAssignments;
@property (nonatomic) BOOL shouldAssignEmptyThemePlaceholder;
@property (nonatomic) BOOL shouldOverwriteExistingThemeVersions;
@property (nonatomic) long long adapterVersionForEmptyThemeAssignment;
@property (nonatomic) long long uemVersionForEmptyThemeAssignment;
@property (nonatomic) long long adapterVersionForVersionOverwrite;
@property (nonatomic) long long uemVersionForVersionOverwrite;
@property (nonatomic) float aggregationScore;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSArray *localizedLocationNames;
@property (nonatomic) unsigned short processedLocation;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) id<PLChangesForServiceHandling> changesForServiceHandler;
@property (readonly, nonatomic) NSString *changeTypeForSummary;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *clientBundleID;

+ (id)changeRequestForMoment:(id)a0;

- (void)clearThemeAssignments;
- (void).cxx_destruct;
- (void)addAssetSearchEntityWithLabel:(id)a0 identifier:(id)a1 type:(unsigned long long)a2 confidence:(double)a3 localeIdentifier:(id)a4 dateInterval:(id)a5 synonyms:(id)a6;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)assignEmptyThemeWithAdapterVersion:(long long)a0 uemVersion:(long long)a1;
- (void)assignThemeNamed:(id)a0 adapterVersion:(long long)a1 uemVersion:(long long)a2 confidence:(id)a3;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)resetThemeAssignmentVersions;

@end
