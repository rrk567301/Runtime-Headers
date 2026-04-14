@interface NSSLSTransaction : NSObject

+ (id)currentTransaction;

- (void)enqueueSerializedUpdatesUsingBlock:(id /* block */)a0;
- (void)entangleContext:(id)a0;
- (void)entangleHandle:(id)a0;

@end
