@interface PHFeatureAvailabilityReadOptions : NSObject <NSCopying>

@property (nonatomic) BOOL useJustInTimeGraphAvailability;
@property (nonatomic) BOOL validateSpotlightAvailability;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
