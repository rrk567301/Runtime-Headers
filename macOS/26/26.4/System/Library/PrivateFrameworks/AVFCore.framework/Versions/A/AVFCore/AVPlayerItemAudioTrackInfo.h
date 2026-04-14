@interface AVPlayerItemAudioTrackInfo : NSObject {
    int trackID;
    int channelCount;
}

+ (id)playerItemTrackInfoForTrack:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)setChannelCount:(int)a0;

@end
