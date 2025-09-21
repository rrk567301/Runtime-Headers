@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadata {
    NSDictionary *_iccMovieProperties;
}

- (void).cxx_destruct;
- (char)isSloMo;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)durationTimeInterval;
- (char)isTimelapse;
- (id)livePhotoPairingIdentifier;
- (id)_makeGPSProperties;
- (char)configureWithMetadataPlist:(id)a0;
- (id)originalFilenamee;
- (id)plistForEncoding;

@end
