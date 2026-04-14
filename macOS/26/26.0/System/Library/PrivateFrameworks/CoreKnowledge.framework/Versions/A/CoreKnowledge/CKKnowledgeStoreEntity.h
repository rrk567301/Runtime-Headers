@class NSString;

@interface CKKnowledgeStoreEntity : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)valueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeValueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)valueForKey:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)valuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)linkTo:(id)a0 withPredicate:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)linkTo:(id)a0 withPredicate:(id)a1 error:(id *)a2;
- (void)linksTo:(id)a0 matchType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)linksTo:(id)a0 matchType:(long long)a1 error:(id *)a2;
- (void)removeWithCompletionHandler:(id /* block */)a0;
- (void)setValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)unlinkTo:(id)a0 withPredicate:(id)a1 ignoreWeights:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
