@interface AVB17221AEMAvidAudioMetaDataVendorStreamFormat : AVB17221AEMAvidVendorStreamFormat

@property unsigned char nominalSampleRate;
@property unsigned short channelsPerFrame;
@property (readonly) unsigned short samplesPerFrame;

+ (id)keyPathsForValuesAffectingNominalSampleRate;
+ (id)keyPathsForValuesAffectingChannelsPerFrame;
+ (id)keyPathsForValuesAffectingSamplesPerFrame;

- (void)setSamplingRate:(id)a0;
- (id)samplingRate;
- (unsigned short)numberOfAudioChannels;
- (unsigned short)channelsPerFrame;
- (void)setChannelsPerFrame:(unsigned short)a0;
- (BOOL)isSupportedAudioFormat;
- (BOOL)isAudioFormat;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;
- (unsigned char)nominalSampleRate;
- (void)setNominalSampleRate:(unsigned char)a0;

@end
