@class NSString, NSImage, NSOperationQueue, _NSQuickAction, NSColor;

@interface _NSQuickActionTouchBarItemDataSource : NSObject {
    NSOperationQueue *_backgroundLoadingQueue;
    _NSQuickAction *_action;
    void *_observationInfo;
    char _needsUpdatedImage;
    char _needsUpdatedBackgroundColor;
}

@property (readonly, copy) NSString *quickActionIdentifier;
@property (readonly, copy) NSString *label;
@property (readonly) NSImage *image;
@property (readonly) NSColor *backgroundColor;
@property (readonly, getter=isEnabled) char enabled;

+ (char)accessInstanceVariablesDirectly;
+ (char)automaticallyNotifiesObserversOfBackgroundColor;
+ (char)automaticallyNotifiesObserversOfEnabled;
+ (char)automaticallyNotifiesObserversOfImage;
+ (char)automaticallyNotifiesObserversOfLabel;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setObservationInfo:(void *)a0;
- (void *)observationInfo;
- (id)initWithQuickActionIdentifier:(id)a0 backgroundLoadingQueue:(id)a1;
- (char)invokeWithoutClient;
- (char)needsInvocationFromClient;
- (void)updateEnabled:(char)a0;
- (void)updateWithQuickAction:(id)a0;

@end
