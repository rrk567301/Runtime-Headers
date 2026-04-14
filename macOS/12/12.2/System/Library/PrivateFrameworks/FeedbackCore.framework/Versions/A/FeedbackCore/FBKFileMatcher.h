@class NSString, NSRegularExpression, NSSet;

@interface FBKFileMatcher : FBKManagedFeedbackObject

@property (retain) NSString *instructionsAsHTML;
@property (retain) NSString *name;
@property (retain) NSRegularExpression *regularExpression;
@property (retain) NSString *operationName;
@property (retain) NSString *deBundleIdentifier;
@property (retain) NSString *regularExpressionPattern;
@property (retain) NSString *platform;
@property (retain) NSSet *filePredicates;
@property (retain) NSSet *feedbackFollowups;

+ (id)entityName;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hasPlatform;
- (void)setPropertiesFromJSONObject:(id)a0;
- (BOOL)matchesFilename:(id)a0;
- (id)iconForRequirement;

@end
