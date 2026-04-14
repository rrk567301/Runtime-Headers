@interface _MFMailboxEnumerator : NSEnumerator {
    struct __CFTree { } *_startTree;
    struct __CFTree { } *_lastTree;
}

- (id)nextObject;
- (void)dealloc;
- (id)init;
- (id)initWithTree:(struct __CFTree { } *)a0;

@end
