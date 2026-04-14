@interface QuartzFilterManager : NSObject {
    id _privateData;
}

+ (id)filtersInDomains:(id)a0;
+ (id)filterManager;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)importFilter:(id)a0;
- (id)filterView;
- (id)filterPanel;
- (void)initWithInternalManager:(id)a0;
- (id)selectedFilter;
- (BOOL)selectFilter:(id)a0;

@end
