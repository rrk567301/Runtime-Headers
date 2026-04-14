@interface CKPersistentStoreHandler : NSObject {
    void /* unknown type, empty encoding */ connection;
}

+ (id)inMemoryHandler;

- (BOOL)dropLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2 error:(id *)a3;
- (id)valuesForKeysMatching:(id)a0 error:(id *)a1;
- (BOOL)saveKeysAndValues:(id)a0 error:(id *)a1;
- (long long)increaseWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2;
- (BOOL)dropLinksWithLabel:(id)a0 from:(id)a1 error:(id *)a2;
- (id)tripleComponentsMatching:(id)a0 error:(id *)a1;
- (id)keysAndValuesForKeysMatching:(id)a0 error:(id *)a1;
- (id)keysAndValuesAndReturnError:(id *)a0;
- (id)keysMatching:(id)a0 error:(id *)a1;
- (long long)decreaseWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2;
- (id)initWithName:(id)a0;
- (id)_valuesForKeys:(id)a0 error:(id *)a1;
- (id)keysAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)removeValuesMatching:(id)a0 error:(id *)a1;
- (BOOL)removeValuesForKeys:(id)a0 error:(id *)a1;
- (BOOL)removeValueForKey:(id)a0 error:(id *)a1;
- (BOOL)setWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2 toValue:(long long)a3 error:(id *)a4;
- (id)valuesAndReturnError:(id *)a0;
- (BOOL)dropLinksBetween:(id)a0 and:(id)a1 error:(id *)a2;
- (BOOL)removeAllValuesAndReturnError:(id *)a0;
- (id)init;

@end
