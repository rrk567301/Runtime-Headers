@class WDIterator;

@interface WDTestIterator : WDIterator {
    WDIterator *mIterator;
    id mNext;
}

- (void).cxx_destruct;
- (id)next;
- (id)initWithIterator:(id)a0;
- (BOOL)hasNext;
- (BOOL)test:(id)a0;

@end
