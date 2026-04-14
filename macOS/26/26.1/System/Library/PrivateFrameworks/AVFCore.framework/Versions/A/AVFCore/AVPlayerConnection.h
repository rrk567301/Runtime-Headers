@class NSError, AVWeakReference;

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (readonly, nonatomic) long long status;

- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (id)error;
- (id)player;
- (id)description;
- (void)removeItemFromPlayQueue;
- (void)dealloc;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (id)playerItem;

@end
