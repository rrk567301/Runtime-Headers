@class NSString, NSObject;
@protocol MOSubscription;

@interface MOSink : MOSubscriber <MOCancellable>

@property (readonly, nonatomic) id /* block */ receiveCompletionBlock;
@property (readonly, nonatomic) id /* block */ receiveInputBlock;
@property (readonly, nonatomic) id<MOSubscription> subscription;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSObject *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)receiveSubscription:(id)a0;
- (unsigned long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;

@end
