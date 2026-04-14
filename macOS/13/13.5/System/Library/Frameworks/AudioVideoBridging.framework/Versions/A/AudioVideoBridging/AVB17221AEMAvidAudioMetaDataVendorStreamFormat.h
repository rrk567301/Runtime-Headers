@interface AVB17221AEMAvidAudioMetaDataVendorStreamFormat : AVB17221AEMAvidVendorStreamFormat

@property unsigned char nominalSampleRate;
@property unsigned short channelsPerFrame;
@property (readonly) unsigned short samplesPerFrame;

+ (id)keyPathsForValuesAffectingChannelsPerFrame;
+ (id)keyPathsForValuesAffectingNominalSampleRate;
+ (id)keyPathsForValuesAffectingSamplesPerFrame;

- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)numberOfAudioChannels;
- (unsigned short)channelsPerFrame;
- (void)setChannelsPerFrame:(unsigned short)a0;
- (BOOL)isAudioFormat;
- (BOOL)isSupportedAudioFormat;
- (unsigned short)maximumIntervalFrames;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned char)nominalSampleRate;
- (void)setNominalSampleRate:(unsigned char)a0;

@end
