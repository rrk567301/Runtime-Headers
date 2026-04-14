@class NSArray;

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)initWithArray:(id)a0;
- (id)next;
- (void).cxx_destruct;
- (BOOL)hasNext;

@end
