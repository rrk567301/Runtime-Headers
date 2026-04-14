@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } *_figMutableComposition;
}

@property (readonly, nonatomic, getter=_mutableComposition) struct OpaqueFigMutableComposition { } *mutableComposition;

- (BOOL)isDecodable;
- (id)segments;
- (BOOL)isPlayable;
- (void)dealloc;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (int)decodabilityValidationResult;
- (id)segmentsAsPresented;
- (int)playabilityValidationResult;

@end
