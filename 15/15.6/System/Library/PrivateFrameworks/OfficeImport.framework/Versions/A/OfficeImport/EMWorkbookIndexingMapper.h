@class EDWorkbook;

@interface EMWorkbookIndexingMapper : CMIndexingMapper

@property (readonly) EDWorkbook *document;

- (void)finishMappingWithState:(id)a0;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(char)a3;
- (void)setElementCount:(unsigned long long)a0;

@end
