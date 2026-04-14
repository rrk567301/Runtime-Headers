@class WDIterator;

@interface WDCombinedIterator : WDIterator {
    WDIterator *mParentIterator;
}

@property (retain, nonatomic) WDIterator *childIterator;

- (void).cxx_destruct;
- (id)next;
- (id)initWithParentIterator:(id)a0;
- (id)childIteratorFrom:(id)a0;
- (id)newChildIteratorFrom:(id)a0;
- (BOOL)hasNext;
- (void)incrementChildIterator;

@end
