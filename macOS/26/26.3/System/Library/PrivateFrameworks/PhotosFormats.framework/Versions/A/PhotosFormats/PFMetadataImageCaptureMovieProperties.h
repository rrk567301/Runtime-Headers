@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadata {
    NSDictionary *_iccMovieProperties;
}

- (id)plistForEncoding;
- (id)livePhotoPairingIdentifier;
- (BOOL)isSloMo;
- (id)durationTimeInterval;
- (id)_makeGPSProperties;
- (BOOL)isTimelapse;
- (void).cxx_destruct;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)originalFilenamee;

@end
