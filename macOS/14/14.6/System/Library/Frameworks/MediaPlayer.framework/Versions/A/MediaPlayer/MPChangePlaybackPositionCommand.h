@interface MPChangePlaybackPositionCommand : MPRemoteCommand

@property (nonatomic) BOOL canBeControlledByScrubbing;

- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPositionTime:(double)a0;

@end
