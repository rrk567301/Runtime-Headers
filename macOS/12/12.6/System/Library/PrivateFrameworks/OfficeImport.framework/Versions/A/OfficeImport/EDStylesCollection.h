@interface EDStylesCollection : EDCollection {
    unsigned long long mDefaultWorkbookStyleIndex;
}

- (id)init;
- (unsigned long long)addObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setDefaultWorkbookStyleIndex:(unsigned long long)a0;
- (id)defaultWorkbookStyle;
- (unsigned long long)defaultWorkbookStyleIndex;

@end
