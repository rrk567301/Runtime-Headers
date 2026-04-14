@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadataCore {
    NSDictionary *_audioVideoProperties;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)audioSampleRate;
- (id)nominalFrameRate;
- (struct opaqueCMFormatDescription { } *)_formatDescription;
- (id)software;
- (BOOL)isMovie;
- (id)cameraModel;
- (id)videoCodecName;
- (id)audioDataRate;
- (id)audioTrackFormat;
- (BOOL)isSloMo;
- (BOOL)isTimelapse;
- (id)durationTimeInterval;
- (id)cameraMake;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)videoDataRate;
- (id)audioTrackFormatFlags;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)_makeGPSProperties;
- (id)_makeDateTimeProperties;
- (id)_makeGeometryProperties;
- (id)plistForEncoding;
- (id)_primaryVideoTrack;
- (id)_primaryAudioTrack;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;

@end
