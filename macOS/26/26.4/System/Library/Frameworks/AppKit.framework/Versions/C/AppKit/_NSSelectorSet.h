@class NSHashTable;

@interface _NSSelectorSet : NSObject {
    NSHashTable *_hash;
}

- (id)initWithHash:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)containsSelector:(SEL)a0;
- (id)initWithSelectors:(SEL)a0;

@end
