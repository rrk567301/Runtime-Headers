@class NSSet;

@interface FBKFilePredicate : FBKManagedFeedbackObject

@property (nonatomic) BOOL alwaysRequired;
@property (nonatomic) BOOL requiresRemote;
@property (retain, nonatomic) NSSet *conditions;
@property (retain, nonatomic) NSSet *matchers;
@property (retain, nonatomic) NSSet *bugForms;
@property (nonatomic) long long enhancedLoggingDuration;
@property (nonatomic) long long enhancedLoggingRetryCount;
@property (nonatomic) BOOL showsConsentText;

+ (id)entityName;

- (void)setPropertiesFromJSONObject:(id)a0;
- (BOOL)satisfiedBy:(id)a0;

@end
