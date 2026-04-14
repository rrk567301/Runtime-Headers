@interface EDListUnsubscribeHandler : NSObject

+ (id)log;

- (void)ignoreWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeMailtoWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeHTMLWithCommand:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;

@end
