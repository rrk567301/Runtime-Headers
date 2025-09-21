@class NSOrderedSet, PHUserFeedback;

@interface PHPersonUserFeedbackProperties : PHPersonPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;
@property (readonly, nonatomic) NSOrderedSet *autonamingUserFeedbacks;

+ (BOOL)isToMany;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToSortBy;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 person:(id)a1 prefetched:(BOOL)a2;

@end
