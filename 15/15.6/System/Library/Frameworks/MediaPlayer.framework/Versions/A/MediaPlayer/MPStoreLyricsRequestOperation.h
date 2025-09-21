@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) long long songAdamID;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (id)_lyricsURLForURLBag:(id)a0;
+ (char)supportsLyricsForURLBag:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)a0;
- (void)_enqueueOperationWithURL:(id)a0 storeURLBag:(id)a1 allowingAuthentication:(char)a2;

@end
