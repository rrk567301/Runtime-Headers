@interface _MFMailboxEnumerator : NSEnumerator {
    struct __CFTree { } *_startTree;
    struct __CFTree { } *_lastTree;
}

- (id)init;
- (void)dealloc;
- (id)nextObject;
- (id)initWithTree:(struct __CFTree { } *)a0;

@end
