@interface TSPMutableLargeLazyReferenceArraySegment : TSPAbstractMutableLargeArraySegment

- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned long long)estimatedByteSizeOfElement:(id)a0;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (void)addReferredObject:(id)a0;
- (id)referredObjectAtIndex:(unsigned long long)a0;

@end
