@class NSObject;
@protocol OS_dispatch_queue, AVMediaDataRequesterConsumer;

@interface AVMediaDataRequester : NSObject {
    id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly, nonatomic) id /* block */ requestBlock;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)initWithMediaDataConsumer:(id)a0 requestQueue:(id)a1 requestBlock:(id /* block */)a2;
- (void)_requestMediaDataIfReady;
- (void)startRequestingMediaData;

@end
