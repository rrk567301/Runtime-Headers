@class NSDictionary;
@protocol NSCopying;

@interface HDMappedDateIntervalIterator : HDDateIntervalIterator {
    NSDictionary *_dateIntervalMap;
}

@property (readonly, nonatomic) id<NSCopying> currentItem;

- (void).cxx_destruct;
- (id)nextItem;
- (id)initWithDateIntervalMap:(id)a0;
- (id)nextItemWithDateIntervalPassingTest:(id /* block */)a0;

@end
