@class NSString;

@interface SSFreeFormResultBuilder : SSResultBuilder

@property (retain) NSString *freeFormDescription;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildDescriptions;

@end
