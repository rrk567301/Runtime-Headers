@class WDIterator;

@interface WDTestIterator : WDIterator {
    WDIterator *mIterator;
    id mNext;
}

- (void).cxx_destruct;
- (id)initWithIterator:(id)a0;
- (id)next;
- (char)hasNext;
- (char)test:(id)a0;

@end
