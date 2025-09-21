@interface _MFMailboxChildrenEnumerator : NSEnumerator {
    struct __CFTree { } *_root;
    struct __CFTree { } *_currentTree;
}

@property (readonly, nonatomic) char includeHidden;

- (void)dealloc;
- (id)init;
- (id)nextObject;
- (id)initWithTree:(struct __CFTree { } *)a0 includeHiddenChildren:(char)a1;

@end
