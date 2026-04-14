@interface TSPersistence.TSPMutableReferenceMap : NSObject {
    void /* unknown type, empty encoding */ referenceMap;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCapacity:(long long)a0;
- (void).cxx_destruct;
- (id)allReferencesFromIdentifier:(long long)a0;
- (void)enumerateReferencesUsingBlock:(id /* block */)a0;
- (long long)incrementReferenceFromIdentifier:(long long)a0 toIdentifier:(long long)a1 increment:(long long)a2;
- (long long)addReferenceFromIdentifier:(long long)a0 toIdentifier:(long long)a1;
- (long long)removeReferenceFromIdentifier:(long long)a0 toIdentifier:(long long)a1;
- (void)replaceReferencesFromIdentifier:(long long)a0 withIdentifierSet:(id)a1;
- (void)mergeWithReferenceMap:(id)a0;
- (id)makeReferenceMap;

@end
