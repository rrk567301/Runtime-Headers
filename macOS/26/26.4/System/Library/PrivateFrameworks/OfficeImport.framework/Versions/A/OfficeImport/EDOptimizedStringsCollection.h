@class NSMutableDictionary;

@interface EDOptimizedStringsCollection : EDCollection {
    NSMutableDictionary *mStringDictionary;
}

- (unsigned long long)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)addOrEquivalentObject:(id)a0;

@end
