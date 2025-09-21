@class NSString;

@interface MediaPlaybackCore.PlaybackStatisticsConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ subscription;
}

@property (class, nonatomic, readonly) NSString *identifier;
@property (class, nonatomic, readonly) unsigned int preferredQoSClass;

- (id)init;
- (void).cxx_destruct;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
