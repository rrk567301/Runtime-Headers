@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadata {
    NSDictionary *_audioVideoProperties;
}

- (id)_makeGeometryProperties;
- (id)software;
- (id)plistForEncoding;
- (id)_makeGPSProperties;
- (id)_makeDateTimeProperties;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (BOOL)isMovie;
- (id)cameraModel;
- (id)cameraMake;
- (id)audioSampleRate;
- (id)durationTimeInterval;
- (id)audioDataRate;
- (id)audioTrackFormatFlags;
- (id)nominalFrameRate;
- (id)videoCodecName;
- (id)videoDataRate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSloMo;
- (void).cxx_destruct;
- (BOOL)isTimelapse;
- (id)audioTrackFormat;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)_firstAudioTrack;
- (id)_firstVideoTrack;
- (struct opaqueCMFormatDescription { } *)_formatDescription;

@end
