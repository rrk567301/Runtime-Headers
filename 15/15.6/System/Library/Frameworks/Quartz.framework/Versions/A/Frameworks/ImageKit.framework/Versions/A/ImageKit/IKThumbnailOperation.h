@class IKThumbnailBuilder;

@interface IKThumbnailOperation : NSOperation {
    id _delegate;
    SEL _didEndSelector;
    char _executing;
    char _finished;
    char _delegateNotified;
    IKThumbnailBuilder *_thumbnail;
}

+ (id)operationWithThumbnail:(id)a0 delegate:(id)a1 didEndSelector:(SEL)a2;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (void)notifyDelegate;
- (id)initWithThumbnail:(id)a0 delegate:(id)a1 didEndSelector:(SEL)a2;

@end
