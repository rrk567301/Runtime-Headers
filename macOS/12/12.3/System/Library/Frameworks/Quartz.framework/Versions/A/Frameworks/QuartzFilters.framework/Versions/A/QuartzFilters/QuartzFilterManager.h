@interface QuartzFilterManager : NSObject {
    id _privateData;
}

+ (id)filterManager;
+ (id)filtersInDomains:(id)a0;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)filterView;
- (id)selectedFilter;
- (id)importFilter:(id)a0;
- (id)filterPanel;
- (void)initWithInternalManager:(id)a0;
- (BOOL)selectFilter:(id)a0;

@end
