@interface PXGainMapAnimationDurationFilter : PXNumberFilter

@property (nonatomic) double filterStartTime;
@property (nonatomic) char enabled;
@property (nonatomic) double activationThreshold;
@property (nonatomic) char gainMapImageAvailable;

- (id)init;
- (double)updatedOutput;

@end
