@class NSArray, NSDictionary, NSSet, CRKASMRosterProviderEnvironment;
@protocol CRKClassKitCurrentUser;

@interface CRKASMWorldBuildOperation : CATOperation

@property (readonly, nonatomic) CRKASMRosterProviderEnvironment *environment;
@property (retain, nonatomic) id<CRKClassKitCurrentUser> classKitCurrentUser;
@property (retain, nonatomic) NSArray *classKitClasses;
@property (copy, nonatomic) NSDictionary *classKitLocationsByLocationID;
@property (copy, nonatomic) NSSet *manageableLocationIDs;
@property (copy, nonatomic) NSDictionary *classKitPersonsByClassID;
@property (copy, nonatomic) NSDictionary *trustedClassKitPersonsByClassID;

+ (id)makeErrorWithErrorsByObjectID:(id)a0;

- (void).cxx_destruct;
- (void)finish;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithEnvironment:(id)a0;
- (id)rosterRequirements;
- (void)checkAccountEligibility;
- (void)buildCurrentClassKitUser;
- (void)buildClassKitClasses;
- (void)buildClassKitLocationsByLocationID;
- (void)buildManageableLocationIDs;
- (void)buildAllClassKitPersonsByClassID;
- (void)finishWithEmptyResultObject;
- (void)housekeepKeychain;
- (void)housekeepKeychainWithRoster:(id)a0;
- (id)makeHousekeeperWithRoster:(id)a0;
- (id)compileResult;

@end
