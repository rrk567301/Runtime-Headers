@interface AVB17221AEMConfigurableAudioModelMaker : AVB17221AEMModelMaker

@property (nonatomic) unsigned short inputStreamCount;
@property (nonatomic) unsigned short outputStreamCount;
@property (nonatomic) unsigned short channelCount;
@property (nonatomic) char configPerCount;
@property (nonatomic) char use44k1;
@property (nonatomic) char use48k;
@property (nonatomic) char use88k2;
@property (nonatomic) char use96k;
@property (nonatomic) char use176k4;
@property (nonatomic) char use192k;
@property (nonatomic) char useAM824;
@property (nonatomic) char useAAFInt;
@property (nonatomic) char useAAFFloat;
@property (nonatomic) char useCRF;
@property (nonatomic) char useUpto;

- (id)init;
- (id)bestStreamFormatFromFormats:(id)a0 forSamplingRate:(id)a1;
- (id)entityModelWithAVBInterface:(id)a0;
- (id)streamPortWithIndex:(unsigned short)a0 isInput:(char)a1;
- (id)streamWithIndex:(unsigned short)a0 isInput:(char)a1 samplingRates:(id)a2 mediaClockStream:(char)a3;

@end
