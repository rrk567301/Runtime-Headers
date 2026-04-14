@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackIDs;
- (id)initWithTrackIDs:(id)a0;

@end
