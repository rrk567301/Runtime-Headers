@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } *_figMutableComposition;
}

@property (readonly, nonatomic, getter=_mutableComposition) struct OpaqueFigMutableComposition { } *mutableComposition;

- (id)segments;
- (BOOL)isPlayable;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)segmentsAsPresented;
- (int)playabilityValidationResult;
- (BOOL)isDecodable;
- (int)decodabilityValidationResult;
- (void)dealloc;

@end
