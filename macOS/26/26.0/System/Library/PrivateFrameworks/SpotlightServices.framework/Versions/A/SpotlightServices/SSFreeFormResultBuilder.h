@class NSString;

@interface SSFreeFormResultBuilder : SSResultBuilder

@property (retain) NSString *freeFormDescription;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildDescriptions;

@end
