@class MTRDevice;

@interface MTRClusterFanControl : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFanModeWithParams:(id)a0;
- (void)writeAttributeFanModeWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeFanModeWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeFanModeSequenceWithParams:(id)a0;
- (void)writeAttributeFanModeSequenceWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeFanModeSequenceWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributePercentSettingWithParams:(id)a0;
- (void)writeAttributePercentSettingWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePercentSettingWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributePercentCurrentWithParams:(id)a0;
- (id)readAttributeSpeedMaxWithParams:(id)a0;
- (id)readAttributeSpeedSettingWithParams:(id)a0;
- (void)writeAttributeSpeedSettingWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeSpeedSettingWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeSpeedCurrentWithParams:(id)a0;
- (id)readAttributeRockSupportWithParams:(id)a0;
- (id)readAttributeRockSettingWithParams:(id)a0;
- (void)writeAttributeRockSettingWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeRockSettingWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeWindSupportWithParams:(id)a0;
- (id)readAttributeWindSettingWithParams:(id)a0;
- (void)writeAttributeWindSettingWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeWindSettingWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
