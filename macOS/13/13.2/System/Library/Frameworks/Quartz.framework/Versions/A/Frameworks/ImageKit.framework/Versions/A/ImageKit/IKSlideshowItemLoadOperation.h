@class IKSlideshowElement;

@interface IKSlideshowItemLoadOperation : NSOperation {
    IKSlideshowElement *_item;
    BOOL _display;
}

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (void)main;
- (void)slideshowWillStop:(id)a0;
- (id)initWithItem:(id)a0 display:(BOOL)a1;

@end
