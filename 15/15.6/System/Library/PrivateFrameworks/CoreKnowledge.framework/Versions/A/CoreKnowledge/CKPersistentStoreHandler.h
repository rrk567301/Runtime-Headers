@interface CKPersistentStoreHandler : NSObject {
    void /* unknown type, empty encoding */ connection;
}

+ (id)inMemoryHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (char)removeValueForKey:(id)a0 error:(id *)a1;
- (id)tripleComponentsMatching:(id)a0 error:(id *)a1;
- (id)_valuesForKeys:(id)a0 error:(id *)a1;
- (long long)decreaseWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2;
- (char)dropLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2 error:(id *)a3;
- (char)dropLinksBetween:(id)a0 and:(id)a1 error:(id *)a2;
- (char)dropLinksWithLabel:(id)a0 from:(id)a1 error:(id *)a2;
- (long long)increaseWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2;
- (id)keysAndReturnError:(id *)a0;
- (id)keysAndValuesAndReturnError:(id *)a0;
- (id)keysAndValuesForKeysMatching:(id)a0 error:(id *)a1;
- (id)keysMatching:(id)a0 error:(id *)a1;
- (char)removeAllValuesAndReturnError:(id *)a0;
- (char)removeValuesForKeys:(id)a0 error:(id *)a1;
- (char)removeValuesMatching:(id)a0 error:(id *)a1;
- (char)saveKeysAndValues:(id)a0 error:(id *)a1;
- (char)setWeightForLinkWithLabel:(id)a0 between:(id)a1 and:(id)a2 toValue:(long long)a3 error:(id *)a4;
- (id)valuesAndReturnError:(id *)a0;
- (id)valuesForKeysMatching:(id)a0 error:(id *)a1;

@end
