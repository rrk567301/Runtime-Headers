@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadata {
    NSDictionary *_audioVideoProperties;
}

- (BOOL)isSloMo;
- (id)nominalFrameRate;
- (BOOL)isMovie;
- (id)cameraMake;
- (id)cameraModel;
- (id)audioTrackFormatFlags;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)plistForEncoding;
- (id)durationTimeInterval;
- (id)audioTrackFormat;
- (id)videoCodecName;
- (BOOL)isEqual:(id)a0;
- (id)_makeGPSProperties;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_makeGeometryProperties;
- (void).cxx_destruct;
- (id)_makeDateTimeProperties;
- (id)audioSampleRate;
- (id)software;
- (id)videoDataRate;
- (BOOL)isTimelapse;
- (id)audioDataRate;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { } *)_formatDescription;

@end
