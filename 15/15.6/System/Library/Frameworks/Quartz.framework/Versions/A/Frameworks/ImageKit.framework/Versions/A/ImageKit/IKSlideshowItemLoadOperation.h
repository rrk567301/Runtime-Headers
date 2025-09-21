@class IKSlideshowElement;

@interface IKSlideshowItemLoadOperation : NSOperation {
    IKSlideshowElement *_item;
    char _display;
}

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (void)main;
- (id)initWithItem:(id)a0 display:(char)a1;
- (void)slideshowWillStop:(id)a0;

@end
