@class RMStoreDeclarationKey;

@interface RMStoreDeclarationKeyPair : NSObject

@property (readonly, copy, nonatomic) RMStoreDeclarationKey *applyKey;
@property (readonly, copy, nonatomic) RMStoreDeclarationKey *replaceKey;

+ (id)newDeclarationKeyPairWithNewKey:(id)a0;
+ (id)newDeclarationKeyPairWithUpdateKey:(id)a0 replaceKey:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNewKey:(id)a0 replaceKey:(id)a1;

@end
