@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadataCore {
    NSDictionary *_iccMovieProperties;
}

- (void).cxx_destruct;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (BOOL)isSloMo;
- (BOOL)isTimelapse;
- (id)livePhotoPairingIdentifier;
- (id)durationTimeInterval;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)_makeGPSProperties;
- (id)plistForEncoding;
- (id)originalFilenamee;

@end
