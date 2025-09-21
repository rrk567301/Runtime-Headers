@class AVAssetReaderTrackOutput, AVAssetReader, NSDictionary;

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    struct opaqueCMSampleBuffer { } *_nextSample;
    long long _status;
    NSDictionary *_decoderSettings;
}

- (void)dealloc;
- (void).cxx_destruct;
- (long long)status;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (id)initWithTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (id)initWithTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 withSettings:(id)a2 applyTransform:(char)a3;

@end
