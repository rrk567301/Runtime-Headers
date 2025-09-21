@interface NIDeviceCapabilities : NSObject <NIInternalDeviceCapability>

@property (readonly, nonatomic) char supportsCoarseDistanceMeasurement;
@property (readonly, nonatomic) char supportsPreciseDistanceMeasurement;
@property (readonly, nonatomic) char supportsDirectionMeasurement;
@property (readonly, nonatomic) char supportsCameraAssistance;
@property (readonly, nonatomic) char supportsExtendedDistanceMeasurement;

+ (id)new;

- (id)init;
- (id)initWithBitmap:(unsigned char)a0;
- (id)initWithFineRangingSupport:(char)a0 aoaSupport:(char)a1 extendedDistanceMeasurementSupport:(char)a2 syntheticApertureSupport:(char)a3;
- (id)initWithFineRangingSupport:(char)a0 coarseRangingSupport:(char)a1 aoaSupport:(char)a2 extendedDistanceMeasurementSupport:(char)a3 syntheticApertureSupport:(char)a4;
- (unsigned char)toBitmap;

@end
