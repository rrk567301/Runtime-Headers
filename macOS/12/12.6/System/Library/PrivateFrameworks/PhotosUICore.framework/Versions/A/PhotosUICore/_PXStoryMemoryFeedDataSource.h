@class PXSectionedDataSource;

@interface _PXStoryMemoryFeedDataSource : NSObject {
    PXSectionedDataSource *_dataSource;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)objectReferenceNearestToObjectReference:(id)a0;

@end
