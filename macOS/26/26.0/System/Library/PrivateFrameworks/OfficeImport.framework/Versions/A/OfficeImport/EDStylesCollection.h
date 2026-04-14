@interface EDStylesCollection : EDCollection {
    unsigned long long mDefaultWorkbookStyleIndex;
}

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)defaultWorkbookStyle;
- (unsigned long long)defaultWorkbookStyleIndex;
- (void)setDefaultWorkbookStyleIndex:(unsigned long long)a0;

@end
