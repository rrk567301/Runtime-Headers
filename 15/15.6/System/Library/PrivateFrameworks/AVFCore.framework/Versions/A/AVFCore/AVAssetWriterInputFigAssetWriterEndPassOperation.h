@class AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    int _trackID;
}

@property (readonly, nonatomic) AVAssetWriterInputPassDescription *descriptionForNextPass;

- (void)dealloc;
- (id)init;
- (void)start;
- (char)isAsynchronous;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 trackID:(int)a1;
- (void)_notifyWhetherMorePassesAreNeeded:(char)a0 timeRanges:(id)a1 forTrackWithID:(int)a2;

@end
