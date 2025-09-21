@interface _MFMailboxChildrenEnumerator : NSEnumerator {
    struct __CFTree { } *_root;
    struct __CFTree { } *_currentTree;
}

@property (readonly, nonatomic) BOOL includeHidden;

- (void)dealloc;
- (id)nextObject;
- (id)init;
- (id)initWithTree:(struct __CFTree { } *)a0 includeHiddenChildren:(BOOL)a1;

@end
