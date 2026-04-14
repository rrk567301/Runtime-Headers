@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } *_figMutableComposition;
}

@property (readonly, nonatomic, getter=_mutableComposition) struct OpaqueFigMutableComposition { } *mutableComposition;

- (void)dealloc;
- (id)segments;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (int)decodabilityValidationResult;
- (BOOL)isDecodable;
- (BOOL)isPlayable;
- (int)playabilityValidationResult;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
