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
- (id)description;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;
- (id)player;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (void)removeItemFromPlayQueue;
- (void)dealloc;

@end
