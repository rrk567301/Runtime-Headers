@class NSArray, NSDictionary;
@protocol BWMetadataDetectedResultsObserver;

@interface BWMRCNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSArray *_symbologiesArray;
    NSArray *_mrcIdentifiers;
    long long _lastDetectedMRCCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectOfInterest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rectOfInterestLock;
    char _hasPendingRectOfInterestUpdate;
    char _lowPowerModeEnabled;
    NSDictionary *_metadataIdentifierToSymbologyDictionary;
}

@property (nonatomic) id<BWMetadataDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)nodeType;
- (void)setLowPowerModeEnabled:(char)a0;
- (char)lowPowerModeEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfInterest;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)mrcIdentifiers;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setMrcIdentifiers:(id)a0;

@end
