@class NSString, AVAsset, AVAssetReader, NSMutableArray;

@interface HMIVideoAssetReader : HMIVideoNode <HMFLogging> {
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    struct __CFArray { } *_trackSamples;
    NSMutableArray *_trackOutputs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferFromTrackOutput:(id)a0;
- (char)_createOutputsForAsset:(id)a0 readVideo:(char)a1 readAudio:(char)a2;
- (char)checkAndSaveCrashReportWithData:(id)a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBufferWithTrackIndexOutput:(unsigned long long *)a0;
- (id)initWithAsset:(id)a0 readVideoTrack:(char)a1 readAudioTrack:(char)a2;

@end
