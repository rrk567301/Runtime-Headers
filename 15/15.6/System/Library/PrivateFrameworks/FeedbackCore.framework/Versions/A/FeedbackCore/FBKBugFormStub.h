@class FBKBugForm, NSSet, NSString, NSArray, FBKUser, NSNumber;

@interface FBKBugFormStub : FBKManagedLocalIDObject

@property (readonly, nonatomic) NSSet *stubsWithMatchingID;
@property (readonly, nonatomic) NSSet *teamsMatchingFormID;
@property (copy, nonatomic) NSString *buildPrefix;
@property (nonatomic) char forcePicker;
@property (copy, nonatomic) NSString *formDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) NSArray *pluginIDs;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSNumber *remoteID;
@property (copy) NSNumber *serverID;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) FBKBugForm *bugForm;
@property (retain, nonatomic) NSSet *teams;
@property (retain, nonatomic) FBKUser *user;
@property (retain, nonatomic) NSString *tat;
@property (nonatomic) char wasFetchedByTat;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)uniquingKey;
+ (id)sortDescriptor;
+ (id)bugFormStubsMatchingBuild:(id)a0 forPlatform:(id)a1 withStubs:(id)a2;
+ (id)bugFormStubsMatchingBuild:(id)a0 withStubs:(id)a1;
+ (id)predicateForAllStubs;
+ (id)predicateForStub:(id)a0;
+ (id)predicateForTeam:(id)a0;

- (id)debugDescription;
- (id)preferredTeamForStubPreferringTeam:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;
- (id)signatureDescription;

@end
