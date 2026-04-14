@interface ASDAppLedger : NSObject

@property (class, readonly) ASDAppLedger *sharedLedger;

- (id)initPrivate;
- (void)itemsMatchingQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)itemsWithCompletionHandler:(id /* block */)a0;

@end
