@class NSString, NSImage, NSOperationQueue, _NSQuickAction, NSColor;

@interface _NSQuickActionTouchBarItemDataSource : NSObject {
    NSOperationQueue *_backgroundLoadingQueue;
    _NSQuickAction *_action;
    void *_observationInfo;
    BOOL _needsUpdatedImage;
    BOOL _needsUpdatedBackgroundColor;
}

@property (readonly, copy) NSString *quickActionIdentifier;
@property (readonly, copy) NSString *label;
@property (readonly) NSImage *image;
@property (readonly) NSColor *backgroundColor;
@property (readonly, getter=isEnabled) BOOL enabled;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfEnabled;
+ (BOOL)automaticallyNotifiesObserversOfImage;
+ (BOOL)automaticallyNotifiesObserversOfLabel;
+ (BOOL)automaticallyNotifiesObserversOfBackgroundColor;

- (void)dealloc;
- (void)setObservationInfo:(void *)a0;
- (void).cxx_destruct;
- (void *)observationInfo;
- (BOOL)needsInvocationFromClient;
- (id)initWithQuickActionIdentifier:(id)a0 backgroundLoadingQueue:(id)a1;
- (void)updateWithQuickAction:(id)a0;
- (void)updateEnabled:(BOOL)a0;
- (BOOL)invokeWithoutClient;

@end
