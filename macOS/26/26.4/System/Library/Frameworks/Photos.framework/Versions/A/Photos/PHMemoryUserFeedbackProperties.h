@class PHUserFeedback;

@interface PHMemoryUserFeedbackProperties : PHMemoryPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (BOOL)isToMany;
+ (id)propertiesToSortBy;
+ (id)keyPathToPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 memory:(id)a1 prefetched:(BOOL)a2;

@end
