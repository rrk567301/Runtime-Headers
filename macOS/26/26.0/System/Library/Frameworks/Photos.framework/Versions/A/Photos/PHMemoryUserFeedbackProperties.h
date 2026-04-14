@class PHUserFeedback;

@interface PHMemoryUserFeedbackProperties : PHMemoryPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;

+ (BOOL)isToMany;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToSortBy;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 memory:(id)a1 prefetched:(BOOL)a2;

@end
