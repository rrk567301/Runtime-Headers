@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VUIMediaAPIPlaybackPosition : NSObject

@property (readonly, nonatomic) double requestWaitTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) long long mediaType;

- (void).cxx_destruct;
- (void)playbackPositionWithCompletion:(id /* block */)a0;
- (id)initWithAdamID:(id)a0 mediaType:(long long)a1;
- (void)updatePlaybackPositionWithSuggestedTime:(double)a0 isItemComplete:(BOOL)a1;

@end
