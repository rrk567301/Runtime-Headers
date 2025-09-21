@class NSString, KGElementIdentifierSet;

@interface KnowledgeGraphKit.KGWrapperDirectedBinaryAdjacency : NSObject {
    void /* unknown type, empty encoding */ wrappedValue;
}

@property (nonatomic, readonly) KGElementIdentifierSet *sources;
@property (nonatomic, readonly) KGElementIdentifierSet *targets;
@property (nonatomic, readonly) long long sourcesCount;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)identityWith:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)unionWith:(id)a0;
- (id)differenceWith:(id)a0;
- (char)containsSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (void)enumerateTargetsBySourceWith:(id /* block */)a0;
- (id)intersectingSourcesWith:(id)a0;
- (id)intersectingTargetsWith:(id)a0;
- (id)subtractingSourcesWith:(id)a0;
- (id)subtractingTargetsWith:(id)a0;
- (id)targetsForSourceIdentifier:(unsigned long long)a0;
- (id)targetsForSources:(id)a0;
- (id)targetsWithMinimumCount:(unsigned long long)a0;
- (id)transposed;
- (id)joinOnTargetsOfAdjacency:(id)a0;

@end
