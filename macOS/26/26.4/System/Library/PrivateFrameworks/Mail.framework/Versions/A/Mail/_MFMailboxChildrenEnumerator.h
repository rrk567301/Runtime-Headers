@interface _MFMailboxChildrenEnumerator : NSEnumerator {
    struct __CFTree { } *_root;
    struct __CFTree { } *_currentTree;
}

@property (readonly, nonatomic) BOOL includeHidden;

- (id)init;
- (void)dealloc;
- (id)nextObject;
- (id)initWithTree:(struct __CFTree { } *)a0 includeHiddenChildren:(BOOL)a1;

@end
