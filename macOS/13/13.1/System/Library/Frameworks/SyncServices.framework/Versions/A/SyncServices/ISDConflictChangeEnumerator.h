@class NSEnumerator, NSSet, NSMutableArray, ISDConflictManager;

@interface ISDConflictChangeEnumerator : NSEnumerator {
    NSEnumerator *_conflictEnumerator;
    NSMutableArray *_changeQueue;
    unsigned int _generation;
    ISDConflictManager *_conflictManager;
    NSSet *_entityNames;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithConflictEnumerator:(id)a0 conflictManager:(id)a1 entityNames:(id)a2 generation:(unsigned int)a3;
- (void)_processConflict:(id)a0;

@end
