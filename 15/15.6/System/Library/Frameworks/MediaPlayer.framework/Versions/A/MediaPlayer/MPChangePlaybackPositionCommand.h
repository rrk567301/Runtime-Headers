@interface MPChangePlaybackPositionCommand : MPRemoteCommand

@property (nonatomic) char canBeControlledByScrubbing;
@property (nonatomic) char supportsReferencePosition;

- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPositionTime:(double)a0;

@end
