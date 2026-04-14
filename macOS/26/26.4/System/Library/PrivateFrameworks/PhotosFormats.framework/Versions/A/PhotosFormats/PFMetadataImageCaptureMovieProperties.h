@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadata {
    NSDictionary *_iccMovieProperties;
}

- (id)plistForEncoding;
- (id)_makeGPSProperties;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)durationTimeInterval;
- (id)livePhotoPairingIdentifier;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (BOOL)isSloMo;
- (void).cxx_destruct;
- (BOOL)isTimelapse;
- (id)originalFilenamee;

@end
