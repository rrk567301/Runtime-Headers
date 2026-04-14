@class NSHashTable;

@interface _NSSelectorSet : NSObject {
    NSHashTable *_hash;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithHash:(id)a0;
- (id)init;
- (BOOL)containsSelector:(SEL)a0;
- (id)initWithSelectors:(SEL)a0;

@end
