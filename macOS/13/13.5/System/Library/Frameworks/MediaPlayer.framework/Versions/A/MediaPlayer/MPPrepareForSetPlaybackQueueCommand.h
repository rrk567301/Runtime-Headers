@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPPrepareForSetPlaybackQueueCommand : MPRemoteCommand {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) NSDictionary *proactiveCommandOptions;

- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
