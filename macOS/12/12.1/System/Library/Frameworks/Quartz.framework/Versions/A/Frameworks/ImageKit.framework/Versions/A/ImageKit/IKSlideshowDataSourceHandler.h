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
- (void)dealloc;
- (unsigned long long)itemCount;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)cleanup;
- (id)dataSource;
- (id)initWithDataSource:(id)a0;
- (void)slideshowDidStop;
- (void)gotoItem:(id)a0;
- (void)slideshowWillStart;
- (id)nameOfSlideshowItemAtIndex:(unsigned long long)a0;
- (void)updateNumberOfItems;
- (void)slideshowDidChangeCurrentIndex:(unsigned long long)a0;

@end
