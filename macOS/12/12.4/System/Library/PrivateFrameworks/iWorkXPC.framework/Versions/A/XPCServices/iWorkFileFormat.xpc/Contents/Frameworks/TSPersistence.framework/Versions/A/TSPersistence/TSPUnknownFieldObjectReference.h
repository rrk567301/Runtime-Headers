@class TSPLazyReferenceArray;

@interface TSPUnknownFieldObjectReference : TSPUnknownField {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
