@class NSString, FBKBugForm;

@interface FBKPresubmissionConsent : FBKManagedFeedbackObject

@property (retain, nonatomic) NSString *text;
@property (weak, nonatomic) FBKBugForm *bugForm;

+ (id)entityName;
+ (id)uniquingKey;

- (void)setPropertiesFromJSONObject:(id)a0;

@end
