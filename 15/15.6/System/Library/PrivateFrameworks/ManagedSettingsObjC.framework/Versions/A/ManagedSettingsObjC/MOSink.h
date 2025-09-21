@class NSString, NSObject;
@protocol MOSubscription;

@interface MOSink : MOSubscriber <MOCancellable>

@property (readonly, nonatomic) id /* block */ receiveCompletionBlock;
@property (readonly, nonatomic) id /* block */ receiveInputBlock;
@property (readonly, nonatomic) id<MOSubscription> subscription;
@property (readonly, nonatomic) char active;
@property (readonly, nonatomic) NSObject *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)receiveCompletion:(id)a0;
- (unsigned long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;

@end
