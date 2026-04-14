@class CCSerializedSetMessage;

@interface CCSerializedSetChangeEnumerator : NSObject <CCSetChangeEnumerator> {
    CCSerializedSetMessage *_setMessage;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)next;
- (BOOL)hasNext;
- (id)_nextWithError:(id *)a0;
- (unsigned long long)sharedItemCount;
- (id)initWithSetMessage:(id)a0 bookmark:(id)a1;
- (unsigned long long)itemInstanceCount;
- (id)nextBookmark;

@end
