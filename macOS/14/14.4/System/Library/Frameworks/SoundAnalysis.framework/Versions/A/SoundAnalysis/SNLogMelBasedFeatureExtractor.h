@class SNDSPGraph;

@interface SNLogMelBasedFeatureExtractor : NSObject {
    void /* unknown type, empty encoding */ graphStorage;
    void /* unknown type, empty encoding */ currentSystemConfig;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, readonly) SNDSPGraph *graph;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
