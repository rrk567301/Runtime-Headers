@interface MNGetNavigationStatusRequest : NSObject

@property (nonatomic) BOOL includeRoute;

- (id)fetchGuidanceStateWithTimeout:(double)a0;

@end
