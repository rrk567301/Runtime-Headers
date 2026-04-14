@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)trackIDs;
- (BOOL)isEqual:(id)a0;
- (long long)trackCount;
- (BOOL)providesPreciseDurationAndTiming;
- (void)dealloc;
- (id)initWithTrackIDs:(id)a0;

@end
