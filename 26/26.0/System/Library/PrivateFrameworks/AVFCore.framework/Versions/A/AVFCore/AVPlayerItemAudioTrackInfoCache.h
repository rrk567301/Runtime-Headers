@class NSMutableSet;

@interface AVPlayerItemAudioTrackInfoCache : NSObject {
    NSMutableSet *availableTracks;
    struct OpaqueFigSimpleMutex { } *mutex;
}

- (BOOL)contains:(id)a0;
- (void)dealloc;
- (id)init;
- (int)channelCountForTrack:(id)a0;
- (void)store:(id)a0;

@end
