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

- (void).cxx_destruct;
- (id)description;
- (BOOL)hasPlatform;
- (id)iconForRequirement;
- (BOOL)matchesFilename:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
