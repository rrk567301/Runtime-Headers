@class NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AAFPromise : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _completed;
    id _value;
    NSError *_error;
    NSMutableArray *_callbacks;
}

@property (readonly, nonatomic) id /* block */ then;
@property (readonly, nonatomic) id /* block */ catch;

+ (id)all:(id)a0;

- (void)abortWithError:(id)a0;
- (id)then:(id /* block */)a0;
- (id)initWithValue:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithError:(id)a0;
- (id)then:(id /* block */)a0 onQueue:(id)a1;
- (id)catch:(id /* block */)a0;
- (void)_completeWithValue:(id)a0 error:(id)a1;
- (id)catch:(id /* block */)a0 onQueue:(id)a1;
- (void)_handleChainingResult:(id)a0 withCompletion:(id /* block */)a1;
- (void)onComplete:(id /* block */)a0;
- (id /* block */)catchOnQueue;
- (id /* block */)thenOnQueue;
- (void)_startWithBlock:(id /* block */)a0;
- (id)_chain:(id /* block */)a0;
- (void)onComplete:(id /* block */)a0 onQueue:(id)a1;
- (void).cxx_destruct;
- (id)_placeBlock:(id /* block */)a0 onQueue:(id)a1;

@end
