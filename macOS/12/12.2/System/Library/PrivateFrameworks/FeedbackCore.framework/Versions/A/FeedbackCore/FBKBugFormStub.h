@class FBKBugForm, NSString, NSArray, NSSet, FBKUser, NSNumber;

@interface FBKBugFormStub : FBKManagedLocalIDObject

@property (copy, nonatomic) NSString *buildPrefix;
@property (nonatomic) BOOL forcePicker;
@property (copy, nonatomic) NSString *formDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) NSArray *pluginIDs;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSNumber *remoteID;
@property (copy, nonatomic) NSNumber *serverID;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) FBKBugForm *bugForm;
@property (retain, nonatomic) NSSet *programs;
@property (retain, nonatomic) NSSet *teams;
@property (retain, nonatomic) FBKUser *user;
@property (readonly, nonatomic) NSSet *stubsWithMatchingID;
@property (readonly, nonatomic) NSSet *teamsMatchingFormID;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)sortDescriptor;
+ (id)bugFormStubsMatchingBuild:(id)a0 forPlatform:(id)a1 withStubs:(id)a2;
+ (id)bugFormStubsMatchingBuild:(id)a0 withStubs:(id)a1;
+ (id)uniquingKey;

- (void)setPropertiesFromJSONObject:(id)a0;
- (id)signatureDescription;
- (id)preferredTeamForStubPreferringTeam:(id)a0;

@end
