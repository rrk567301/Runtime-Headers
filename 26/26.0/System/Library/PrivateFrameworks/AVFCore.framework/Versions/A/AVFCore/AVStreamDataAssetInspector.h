@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (void)dealloc;
- (BOOL)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackIDs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isEqual:(id)a0;
- (id)initWithTrackIDs:(id)a0;

@end
