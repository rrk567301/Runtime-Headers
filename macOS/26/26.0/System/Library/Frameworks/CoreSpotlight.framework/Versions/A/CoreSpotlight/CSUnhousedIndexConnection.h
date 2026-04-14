@interface CSUnhousedIndexConnection : CSIndexConnection

+ (id)unhousedIndexConnectionForToken:(id)a0;
+ (void)removeUnhousedIndexConnectionForToken:(id)a0;
+ (id)connectionUUID:(id)a0;
+ (id)serviceName;

- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
