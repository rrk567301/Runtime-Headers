@interface IKSlideshowDataSourceHandler : NSObject {
    id _dataSource;
    unsigned long long _numberOfItems;
    id _previousItem;
    id _currentItem;
    id _nextItem;
    long long _previousItemIndex;
    long long _currentItemIndex;
    long long _nextItemIndex;
    BOOL _dataSourceRespondsToNameOfSlideshowItemAtIndex;
    BOOL _dataSourceRespondsToSlideshowWillStart;
    BOOL _dataSourceRespondsToSlideshowDidStop;
    BOOL _dataSourceRespondsToSlideshowDidChangeCurrentIndex;
}

- (void)finalize;
- (void)cleanup;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)dataSource;
- (id)initWithDataSource:(id)a0;
- (unsigned long long)itemCount;
- (void)dealloc;
- (void)slideshowDidChangeCurrentIndex:(unsigned long long)a0;
- (void)gotoItem:(id)a0;
- (id)nameOfSlideshowItemAtIndex:(unsigned long long)a0;
- (void)slideshowDidStop;
- (void)slideshowWillStart;
- (void)updateNumberOfItems;

@end
