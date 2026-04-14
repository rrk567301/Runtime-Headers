@class NSArray, CCSerializedSetMessage;

@interface CCSerializedSetChangeEnumerator : NSObject <CCSetChangeEnumerator> {
    CCSerializedSetMessage *_setMessage;
    NSArray *_items;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)next;
- (BOOL)reset:(id *)a0;
- (BOOL)hasNext;
- (id)nextBookmark;
- (id)_nextWithError:(id *)a0;
- (BOOL)beginWithBookmark:(id)a0 error:(id *)a1;
- (id)initWithSetMessage:(id)a0;
- (BOOL)isBookmarkUpToDate:(id)a0;
- (id)itemInstanceCount:(id *)a0;
- (id)sharedItemCount:(id *)a0;

@end
