@interface MOSubscriber : NSObject

- (void)receiveSubscription:(id)a0;
- (unsigned long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (id)initSubscriber;

@end
