@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadata {
    NSDictionary *_iccMovieProperties;
}

- (id)_makeGPSProperties;
- (BOOL)isTimelapse;
- (id)plistForEncoding;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)livePhotoPairingIdentifier;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)durationTimeInterval;
- (void).cxx_destruct;
- (BOOL)isSloMo;
- (id)originalFilenamee;

@end
