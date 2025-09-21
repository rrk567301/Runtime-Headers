@class IKSlideshowElement;

@interface IKSlideshowItemLoadThumbnailOperation : NSOperation {
    IKSlideshowElement *_item;
    unsigned long long _currentCount;
    char _display;
}

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (void)main;
- (id)initWithItem:(id)a0 currentCount:(unsigned long long)a1 display:(char)a2;
- (void)slideshowWillStop:(id)a0;

@end
