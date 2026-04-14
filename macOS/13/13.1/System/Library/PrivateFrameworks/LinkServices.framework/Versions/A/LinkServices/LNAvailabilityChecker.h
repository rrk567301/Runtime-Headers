@class NSDictionary;

@interface LNAvailabilityChecker : NSObject

@property (readonly, nonatomic) NSDictionary *availabilityAnnotations;

- (void).cxx_destruct;
- (id)initWithAvailabilityAnnotations:(id)a0;
- (id)availabilityWithPlatform:(id)a0 platformVersion:(id)a1;

@end
