@interface RMObserverStore : RMBaseStore <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)storeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)storesWithCompletionHandler:(id /* block */)a0;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToStore:(id)a0;

@end
