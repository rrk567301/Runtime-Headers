@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadata {
    NSDictionary *_iccMovieProperties;
}

- (BOOL)isTimelapse;
- (BOOL)isSloMo;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)_makeGPSProperties;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)plistForEncoding;
- (id)livePhotoPairingIdentifier;
- (id)durationTimeInterval;
- (void).cxx_destruct;
- (id)originalFilenamee;

@end
