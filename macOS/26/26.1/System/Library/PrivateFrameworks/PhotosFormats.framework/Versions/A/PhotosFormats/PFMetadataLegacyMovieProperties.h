@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadata {
    NSDictionary *_audioVideoProperties;
}

- (id)_makeGeometryProperties;
- (id)cameraModel;
- (id)_makeGPSProperties;
- (BOOL)isTimelapse;
- (id)plistForEncoding;
- (id)software;
- (id)cameraMake;
- (BOOL)isMovie;
- (id)nominalFrameRate;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)audioTrackFormat;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)videoDataRate;
- (id)videoCodecName;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)audioSampleRate;
- (id)audioDataRate;
- (id)_makeDateTimeProperties;
- (id)durationTimeInterval;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)audioTrackFormatFlags;
- (BOOL)isSloMo;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { } *)_formatDescription;

@end
