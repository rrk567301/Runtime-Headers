@class IKThumbnailBuilder;

@interface IKThumbnailOperation : NSOperation {
    id _delegate;
    SEL _didEndSelector;
    BOOL _executing;
    BOOL _finished;
    BOOL _delegateNotified;
    IKThumbnailBuilder *_thumbnail;
}

+ (id)operationWithThumbnail:(id)a0 delegate:(id)a1 didEndSelector:(SEL)a2;

- (void)main;
- (void)dealloc;
- (void)cancel;
- (void)notifyDelegate;
- (id)initWithThumbnail:(id)a0 delegate:(id)a1 didEndSelector:(SEL)a2;

@end
