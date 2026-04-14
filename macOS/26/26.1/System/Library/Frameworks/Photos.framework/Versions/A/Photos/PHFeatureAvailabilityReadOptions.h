@interface PHFeatureAvailabilityReadOptions : NSObject <NSCopying>

@property (nonatomic) BOOL useJustInTimeGraphAvailability;
@property (nonatomic) BOOL validateSpotlightAvailability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
