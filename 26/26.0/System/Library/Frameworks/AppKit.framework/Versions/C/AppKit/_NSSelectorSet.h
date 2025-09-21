@class NSHashTable;

@interface _NSSelectorSet : NSObject {
    NSHashTable *_hash;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHash:(id)a0;
- (BOOL)containsSelector:(SEL)a0;
- (id)initWithSelectors:(SEL)a0;

@end
