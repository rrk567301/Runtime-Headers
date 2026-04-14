@class NSMutableSet;

@interface CPLDiffTracker : NSObject

@property (nonatomic) BOOL shouldCompareAllProperties;
@property (readonly, nonatomic) BOOL objectsAreTotallyDifferent;
@property (readonly, nonatomic) NSMutableSet *differingProperties;

- (id)description;
- (id)redactedDescription;
- (void).cxx_destruct;
- (void)noteObjectAreTotallyDifferent;
- (void)noteObjectsDifferOnProperty:(id)a0;
- (BOOL)areObjectsDifferentOnProperty:(id)a0;

@end
