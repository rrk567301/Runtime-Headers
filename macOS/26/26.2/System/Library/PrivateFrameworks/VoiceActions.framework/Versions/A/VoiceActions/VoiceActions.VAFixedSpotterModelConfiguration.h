@class NSString;

@interface VoiceActions.VAFixedSpotterModelConfiguration : NSObject {
    void /* unknown type, empty encoding */ modelFilename;
    void /* unknown type, empty encoding */ keywordsTrainedFor;
    void /* unknown type, empty encoding */ samplesPerPredictionWindow;
    void /* unknown type, empty encoding */ modelInputSize;
    void /* unknown type, empty encoding */ receptiveFieldLength;
    void /* unknown type, empty encoding */ receptiveFieldStride;
    void /* unknown type, empty encoding */ useCMVN;
    void /* unknown type, empty encoding */ layerNormScale;
    void /* unknown type, empty encoding */ layerNormOffset;
    void /* unknown type, empty encoding */ vadGated;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
