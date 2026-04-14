@class NSError, AVWeakReference;

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (readonly, nonatomic) long long status;

- (id)playerItem;
- (id)error;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (id)player;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (id)description;
- (void)removeItemFromPlayQueue;
- (void)dealloc;

@end
