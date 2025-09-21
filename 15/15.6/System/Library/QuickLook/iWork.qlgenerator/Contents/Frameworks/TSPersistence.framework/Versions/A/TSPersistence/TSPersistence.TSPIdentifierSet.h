@interface TSPersistence.TSPIdentifierSet : NSObject {
    void /* unknown type, empty encoding */ identifierSet;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)a0;
- (long long)countForIdentifier:(long long)a0 default:(long long)a1;
- (id)formMergeWithIdentifierSet:(id)a0;
- (id)initFrom:(id)a0;
- (char)intersectsIndexSet:(id)a0;
- (id)makeMutableIdentifierSet;

@end
