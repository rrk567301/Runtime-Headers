@class NSSet;

@interface FBKFilePredicate : FBKManagedFeedbackObject

@property BOOL alwaysRequired;
@property BOOL requiresRemote;
@property (retain) NSSet *conditions;
@property (retain) NSSet *matchers;
@property (retain) NSSet *bugForms;
@property (retain) NSSet *feedbackFollowups;

+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)a0;
- (BOOL)satisfiedBy:(id)a0;

@end
