@interface _MFMailboxEnumerator : NSEnumerator {
    struct __CFTree { } *_startTree;
    struct __CFTree { } *_lastTree;
}

- (id)nextObject;
- (id)init;
- (void)dealloc;
- (id)initWithTree:(struct __CFTree { } *)a0;

@end
