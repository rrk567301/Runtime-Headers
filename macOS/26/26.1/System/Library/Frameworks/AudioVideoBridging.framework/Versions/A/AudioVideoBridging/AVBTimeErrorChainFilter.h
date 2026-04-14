@class NSArray;

@interface AVBTimeErrorChainFilter : AVBTimeErrorFilter {
    NSArray *_filters;
}

- (void)resetFilter;
- (void).cxx_destruct;
- (double)filteredErrorForError:(double)a0;
- (id)initWithFilters:(id)a0;

@end
