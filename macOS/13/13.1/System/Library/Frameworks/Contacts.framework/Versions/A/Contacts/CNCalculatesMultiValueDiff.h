@class NSArray, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface CNCalculatesMultiValueDiff : NSObject {
    NSArray *_multiValue1;
    NSArray *_multiValue2;
    NSOrderedSet *_originalIdentifiers;
    NSOrderedSet *_finalIdentifiers;
    NSMutableOrderedSet *_addedIdentifiers;
    NSMutableOrderedSet *_removedIdentifiers;
    NSMutableOrderedSet *_sameIdentifiers;
    NSMutableOrderedSet *_calculatedFinalIdentifiers;
    NSMutableArray *_updates;
}

+ (id)diffMultiValue:(id)a0 toMultiValue:(id)a1;

- (void).cxx_destruct;
- (id)updates;
- (id)initWithMultiValue1:(id)a0 multiValue2:(id)a1;
- (void)setupOriginalIdentifiers;
- (void)setupFinalIdentifiers;
- (void)setupRemovedIdentifiers;
- (void)setupAddedIdentifiers;
- (void)setupSameIdentifiers;
- (void)setupCalculatedFinalIdentifiers;
- (void)appendRemoveUpdates;
- (void)appendAddUpdates;
- (void)appendReplaceUpdates;
- (void)appendReorderUpdates;
- (void)calculateDiff;

@end
