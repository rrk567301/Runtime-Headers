@class IKSlideshowElement;

@interface IKSlideshowItemLoadThumbnailOperation : NSOperation {
    IKSlideshowElement *_item;
    unsigned long long _currentCount;
    BOOL _display;
}

- (void)finalize;
- (void)cleanup;
- (void)main;
- (void)dealloc;
- (id)initWithItem:(id)a0 currentCount:(unsigned long long)a1 display:(BOOL)a2;
- (void)slideshowWillStop:(id)a0;

@end
