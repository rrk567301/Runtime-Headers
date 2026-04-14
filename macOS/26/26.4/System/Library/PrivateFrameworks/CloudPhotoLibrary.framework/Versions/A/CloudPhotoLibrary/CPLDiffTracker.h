@class NSMutableSet;

@interface CPLDiffTracker : NSObject

@property (nonatomic) BOOL shouldCompareAllProperties;
@property (readonly, nonatomic) BOOL objectsAreTotallyDifferent;
@property (readonly, nonatomic) NSMutableSet *differingProperties;

- (void).cxx_destruct;
- (id)description;
- (id)redactedDescription;
- (BOOL)areObjectsDifferentOnProperty:(id)a0;
- (void)noteObjectAreTotallyDifferent;
- (void)noteObjectsDifferOnProperty:(id)a0;

@end
