@class NSSet;

@interface FBKFilePredicate : FBKManagedFeedbackObject

@property (nonatomic) char alwaysRequired;
@property (nonatomic) char requiresRemote;
@property (retain, nonatomic) NSSet *conditions;
@property (retain, nonatomic) NSSet *matchers;
@property (retain, nonatomic) NSSet *bugForms;
@property (nonatomic) long long enhancedLoggingDuration;
@property (nonatomic) long long enhancedLoggingRetryCount;
@property (nonatomic) char showsConsentText;

+ (id)entityName;

- (char)satisfiedBy:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
