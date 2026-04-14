@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (id)trackIDs;
- (void)dealloc;
- (long long)trackCount;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)isEqual:(id)a0;
- (id)initWithTrackIDs:(id)a0;

@end
