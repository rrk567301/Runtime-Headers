@interface AVPlayerItemAudioTrackInfo : NSObject {
    int trackID;
    int channelCount;
}

+ (id)playerItemTrackInfoForTrack:(id)a0;

- (void)setChannelCount:(int)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
