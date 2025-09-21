@class NSMutableSet;

@interface CPLDiffTracker : NSObject

@property (nonatomic) char shouldCompareAllProperties;
@property (readonly, nonatomic) char objectsAreTotallyDifferent;
@property (readonly, nonatomic) NSMutableSet *differingProperties;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (char)areObjectsDifferentOnProperty:(id)a0;
- (void)noteObjectAreTotallyDifferent;
- (void)noteObjectsDifferOnProperty:(id)a0;

@end
