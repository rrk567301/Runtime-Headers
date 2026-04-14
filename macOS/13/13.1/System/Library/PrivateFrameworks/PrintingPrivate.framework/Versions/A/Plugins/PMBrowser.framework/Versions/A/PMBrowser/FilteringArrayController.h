@class NSString;

@interface FilteringArrayController : NSArrayController {
    NSString *_searchString;
}

- (void)dealloc;
- (id)arrangeObjects:(id)a0;
- (id)searchString;
- (void)setSearchString:(id)a0;

@end
