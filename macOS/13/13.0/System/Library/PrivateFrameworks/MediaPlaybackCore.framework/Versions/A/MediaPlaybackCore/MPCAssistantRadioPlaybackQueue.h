@class NSString;

@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSString *stationStringID;

+ (id)radioQueueWithContextID:(id)a0 stationStringID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;
- (BOOL)supportedOnCurrentPlatform;
- (id)initWithContextID:(id)a0 stationStringID:(id)a1;

@end
