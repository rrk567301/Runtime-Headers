@class NSOrderedSet, PHUserFeedback;

@interface PHPersonUserFeedbackProperties : PHPersonPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;
@property (readonly, nonatomic) NSOrderedSet *autonamingUserFeedbacks;

+ (id)propertiesToFetch;
+ (BOOL)isToMany;
+ (id)entityName;
+ (id)propertiesToSortBy;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 person:(id)a1 prefetched:(BOOL)a2;

@end
