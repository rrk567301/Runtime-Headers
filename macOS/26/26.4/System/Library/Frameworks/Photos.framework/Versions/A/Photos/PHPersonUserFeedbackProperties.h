@class NSOrderedSet, PHUserFeedback;

@interface PHPersonUserFeedbackProperties : PHPersonPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;
@property (readonly, nonatomic) NSOrderedSet *autonamingUserFeedbacks;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (BOOL)isToMany;
+ (id)propertiesToSortBy;
+ (id)keyPathToPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 person:(id)a1 prefetched:(BOOL)a2;

@end
