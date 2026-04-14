@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadata {
    NSDictionary *_iccMovieProperties;
}

- (BOOL)isSloMo;
- (id)plistForEncoding;
- (id)durationTimeInterval;
- (id)_makeGPSProperties;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)livePhotoPairingIdentifier;
- (void).cxx_destruct;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (BOOL)isTimelapse;
- (id)originalFilenamee;

@end
