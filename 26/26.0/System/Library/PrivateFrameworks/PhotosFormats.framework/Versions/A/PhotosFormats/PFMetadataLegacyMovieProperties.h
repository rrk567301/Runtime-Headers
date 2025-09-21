@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadata {
    NSDictionary *_audioVideoProperties;
}

- (BOOL)isTimelapse;
- (BOOL)isSloMo;
- (id)cameraMake;
- (id)nominalFrameRate;
- (id)videoCodecName;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)videoDataRate;
- (id)_makeDateTimeProperties;
- (id)audioTrackFormatFlags;
- (id)audioTrackFormat;
- (id)_makeGeometryProperties;
- (id)software;
- (id)cameraModel;
- (id)_makeGPSProperties;
- (id)audioSampleRate;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)plistForEncoding;
- (BOOL)isMovie;
- (id)audioDataRate;
- (BOOL)isEqual:(id)a0;
- (id)durationTimeInterval;
- (void).cxx_destruct;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { } *)_formatDescription;

@end
