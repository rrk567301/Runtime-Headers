@interface NIDeviceCapabilities : NSObject <NIInternalDeviceCapability>

@property (readonly, nonatomic) BOOL supportsCoarseDistanceMeasurement;
@property (readonly, nonatomic) BOOL supportsPreciseDistanceMeasurement;
@property (readonly, nonatomic) BOOL supportsDirectionMeasurement;
@property (readonly, nonatomic) BOOL supportsCameraAssistance;
@property (readonly, nonatomic) BOOL supportsExtendedDistanceMeasurement;
@property (readonly, nonatomic) BOOL supportsDLTDOAMeasurement;

+ (id)new;

- (id)initWithFineRangingSupport:(BOOL)a0 aoaSupport:(BOOL)a1 extendedDistanceMeasurementSupport:(BOOL)a2 syntheticApertureSupport:(BOOL)a3;
- (id)initWithFineRangingSupport:(BOOL)a0 coarseRangingSupport:(BOOL)a1 aoaSupport:(BOOL)a2 extendedDistanceMeasurementSupport:(BOOL)a3 syntheticApertureSupport:(BOOL)a4;
- (id)init;
- (id)initWithBitmap:(unsigned char)a0;
- (unsigned char)toBitmap;

@end
