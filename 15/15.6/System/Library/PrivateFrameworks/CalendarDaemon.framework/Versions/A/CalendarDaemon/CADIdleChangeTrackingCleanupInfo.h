@interface CADIdleChangeTrackingCleanupInfo : NSObject

@property (nonatomic) double languishPeriod;
@property (nonatomic) int numberOfChanges;

+ (id)serverIdleChangeTrackingCleanupInfo;

- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithLanguishPeriod:(double)a0 numberOfChanges:(int)a1;
- (char)isEqualToInfo:(id)a0;

@end
