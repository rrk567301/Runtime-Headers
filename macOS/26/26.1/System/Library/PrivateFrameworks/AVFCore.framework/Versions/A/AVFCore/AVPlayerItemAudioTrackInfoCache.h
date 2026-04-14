@class NSMutableSet;

@interface AVPlayerItemAudioTrackInfoCache : NSObject {
    NSMutableSet *availableTracks;
    struct OpaqueFigSimpleMutex { } *mutex;
}

- (void)dealloc;
- (BOOL)contains:(id)a0;
- (id)init;
- (int)channelCountForTrack:(id)a0;
- (void)store:(id)a0;

@end
