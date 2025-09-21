@interface QuartzFilterManager : NSObject {
    id _privateData;
}

+ (id)filtersInDomains:(id)a0;
+ (id)filterManager;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)filterPanel;
- (id)filterView;
- (id)importFilter:(id)a0;
- (void)initWithInternalManager:(id)a0;
- (BOOL)selectFilter:(id)a0;
- (id)selectedFilter;

@end
