@interface CSUnhousedIndexConnection : CSIndexConnection

+ (id)unhousedIndexConnectionForToken:(id)a0;
+ (void)removeUnhousedIndexConnectionForToken:(id)a0;
+ (id)serviceName;
+ (id)connectionUUID:(id)a0;

- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
