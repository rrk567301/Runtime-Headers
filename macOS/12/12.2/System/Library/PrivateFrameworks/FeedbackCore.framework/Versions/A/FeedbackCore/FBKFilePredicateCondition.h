@class NSString;

@interface FBKFilePredicateCondition : FBKManagedFeedbackObject

@property (retain) NSString *questiontat;
@property (retain) NSString *questionvalue;

+ (id)entityName;

- (id)description;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
