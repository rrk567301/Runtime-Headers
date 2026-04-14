@class IKSlideshowElement;

@interface IKSlideshowItemLoadOperation : NSOperation {
    IKSlideshowElement *_item;
    BOOL _display;
}

- (void)finalize;
- (void)dealloc;
- (void)cleanup;
- (void)main;
- (id)initWithItem:(id)a0 display:(BOOL)a1;
- (void)slideshowWillStop:(id)a0;

@end
