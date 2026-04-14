@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadata {
    NSDictionary *_audioVideoProperties;
}

- (BOOL)isMovie;
- (id)cameraMake;
- (id)_makeGeometryProperties;
- (id)cameraModel;
- (id)nominalFrameRate;
- (id)plistForEncoding;
- (BOOL)isSloMo;
- (id)durationTimeInterval;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)_makeGPSProperties;
- (id)audioTrackFormatFlags;
- (id)audioSampleRate;
- (id)software;
- (id)audioTrackFormat;
- (BOOL)isTimelapse;
- (void).cxx_destruct;
- (id)videoDataRate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)audioDataRate;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)_makeDateTimeProperties;
- (id)videoCodecName;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { } *)_formatDescription;

@end
