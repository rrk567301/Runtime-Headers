@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray *_trackIDs;
}

- (long long)trackCount;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)trackIDs;
- (void)dealloc;
- (BOOL)providesPreciseDurationAndTiming;
- (id)initWithTrackIDs:(id)a0;

@end
