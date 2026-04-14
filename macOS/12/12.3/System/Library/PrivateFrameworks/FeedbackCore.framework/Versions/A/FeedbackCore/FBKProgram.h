@class NSString, NSSet, FBKUser, NSNumber;

@interface FBKProgram : FBKManagedFeedbackObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *remoteID;
@property (retain, nonatomic) NSSet *contentItems;
@property (retain, nonatomic) NSSet *forms;
@property (retain, nonatomic) FBKUser *user;
@property (readonly) long long programState;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)keyPathsForValuesAffectingProgramState;

- (void)setPropertiesFromJSONObject:(id)a0;

@end
