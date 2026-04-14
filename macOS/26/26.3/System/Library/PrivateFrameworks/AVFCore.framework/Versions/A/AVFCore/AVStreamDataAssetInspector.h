@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)trackCount;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)providesPreciseDurationAndTiming;
- (id)trackIDs;
- (id)initWithTrackIDs:(id)a0;

@end
