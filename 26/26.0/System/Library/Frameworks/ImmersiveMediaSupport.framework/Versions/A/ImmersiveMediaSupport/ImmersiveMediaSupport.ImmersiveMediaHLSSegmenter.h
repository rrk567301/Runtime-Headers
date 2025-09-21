@interface ImmersiveMediaSupport.ImmersiveMediaHLSSegmenter : NSObject <AVAssetWriterDelegate> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ outputFolder;
    void /* unknown type, empty encoding */ indexFileName;
    void /* unknown type, empty encoding */ segmentDuration;
    void /* unknown type, empty encoding */ segmentFilePrefix;
    void /* unknown type, empty encoding */ tracksToInclude;
    void /* unknown type, empty encoding */ nominalFrameRate;
    void /* unknown type, empty encoding */ minFrameDuration;
    void /* unknown type, empty encoding */ trackWriterInputs;
    void /* unknown type, empty encoding */ trackReaderOutputs;
    void /* unknown type, empty encoding */ canceled;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ tracks;
    void /* unknown type, empty encoding */ allTracksAreDone;
    void /* unknown type, empty encoding */ assetWriter;
    void /* unknown type, empty encoding */ assetReader;
    void /* unknown type, empty encoding */ formatDescriptors;
    void /* unknown type, empty encoding */ doneTracks;
    void /* unknown type, empty encoding */ currentSegmentIndex;
    void /* unknown type, empty encoding */ previousSegmentInfo;
    void /* unknown type, empty encoding */ indexFileContent;
    void /* unknown type, empty encoding */ videoChunksTotalBits;
    void /* unknown type, empty encoding */ videoChunksTotalDuration;
    void /* unknown type, empty encoding */ videoChunkPeakRate;
    void /* unknown type, empty encoding */ measuredVideoPeakRates;
    void /* unknown type, empty encoding */ audioChunksTotalBits;
    void /* unknown type, empty encoding */ audioChunksTotalDuration;
    void /* unknown type, empty encoding */ audioChunkPeakRate;
    void /* unknown type, empty encoding */ measuredAudioPeakRates;
    void /* unknown type, empty encoding */ videoFrameRate;
    void /* unknown type, empty encoding */ validFrameRates;
    void /* unknown type, empty encoding */ writerQueue;
    void /* unknown type, empty encoding */ barrier;
    void /* unknown type, empty encoding */ outputSettings;
}

- (id)init;
- (void).cxx_destruct;
- (void)assetWriter:(id)a0 didOutputSegmentData:(id)a1 segmentType:(long long)a2 segmentReport:(id)a3;

@end
