@class NSArray;

@interface CALChainedFilter : CALFilter {
    NSArray *_filters;
}

+ (id)chainedFilterWithFilters:(id)a0;

- (void).cxx_destruct;
- (void)applyTo:(id)a0;
- (id)initWithFilters:(id)a0;

@end
