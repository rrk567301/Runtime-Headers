@interface _MFMailboxChildrenEnumerator : NSEnumerator {
    struct __CFTree { } *_root;
    struct __CFTree { } *_currentTree;
}

@property (readonly, nonatomic) BOOL includeHidden;

- (id)nextObject;
- (id)init;
- (void)dealloc;
- (id)initWithTree:(struct __CFTree { } *)a0 includeHiddenChildren:(BOOL)a1;

@end
