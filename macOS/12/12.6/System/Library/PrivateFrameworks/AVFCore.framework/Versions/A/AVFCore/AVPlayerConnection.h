@class NSError, AVWeakReference;

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (readonly, nonatomic) long long status;

- (void)dealloc;
- (id)description;
- (id)error;
- (id)player;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (void)removeItemFromPlayQueue;
- (id)playerItem;

@end
