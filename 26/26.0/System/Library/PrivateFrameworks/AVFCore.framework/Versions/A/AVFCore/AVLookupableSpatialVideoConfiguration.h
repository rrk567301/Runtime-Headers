@class NSNumber, AVSpatialVideoConfiguration;

@interface AVLookupableSpatialVideoConfiguration : NSObject

@property (copy, nonatomic) NSNumber *lookupID;
@property (readonly, nonatomic) AVSpatialVideoConfiguration *spatialVideoConfiguration;

- (void)dealloc;
- (id)initWithSpatialVideoConfiguration:(id)a0;

@end
