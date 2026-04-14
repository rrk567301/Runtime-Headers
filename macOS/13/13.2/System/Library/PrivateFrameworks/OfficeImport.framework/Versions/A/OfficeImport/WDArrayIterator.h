@class NSArray;

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)next;
- (BOOL)hasNext;

@end
