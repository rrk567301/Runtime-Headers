@class MTRDevice;

@interface MTRClusterBallastConfiguration : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeMinLevelWithParams:(id)a0;
- (id)readAttributeMaxLevelWithParams:(id)a0;
- (id)readAttributePhysicalMinLevelWithParams:(id)a0;
- (id)readAttributePhysicalMaxLevelWithParams:(id)a0;
- (id)readAttributeBallastStatusWithParams:(id)a0;
- (void)writeAttributeMinLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeMinLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeMaxLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeMaxLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeIntrinsicBalanceFactorWithParams:(id)a0;
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeBallastFactorAdjustmentWithParams:(id)a0;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeBallastFactorAdjustmentWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeLampQuantityWithParams:(id)a0;
- (id)readAttributeLampTypeWithParams:(id)a0;
- (void)writeAttributeLampTypeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLampTypeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeLampManufacturerWithParams:(id)a0;
- (void)writeAttributeLampManufacturerWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLampManufacturerWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeLampRatedHoursWithParams:(id)a0;
- (void)writeAttributeLampRatedHoursWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLampRatedHoursWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeLampBurnHoursWithParams:(id)a0;
- (void)writeAttributeLampBurnHoursWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLampBurnHoursWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeLampAlarmModeWithParams:(id)a0;
- (void)writeAttributeLampAlarmModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLampAlarmModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeLampBurnHoursTripPointWithParams:(id)a0;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLampBurnHoursTripPointWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
