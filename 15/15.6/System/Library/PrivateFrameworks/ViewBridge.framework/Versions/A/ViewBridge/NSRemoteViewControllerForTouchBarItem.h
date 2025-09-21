@class NSString, NSTouchBarItem;

@interface NSRemoteViewControllerForTouchBarItem : NSRemoteViewController <_NSAlertSensitiveView, _NSTouchBarItemLayoutWrapper, NSViewBridgeKVOBuddy> {
    unsigned char _observing : 1;
    NSTouchBarItem *_observingTouchBarItem;
}

@property (readonly) char wantsAlertStylePadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) char isSpace;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) long long priorityIndex;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) char participatesInOverflow;
@property (readonly) char isTitle;

+ (id)copyConstraintIdentifier:(id)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)kvoKeys;
- (void)_viewDidMoveToSuperview;
- (char)boolForBridgeKey:(id)a0;
- (void)maintainObservers:(char)a0;
- (void)maintainObserversForTouchBarItem:(id)a0;
- (void)observeValueForVisible:(char)a0;
- (struct CGSize { double x0; double x1; })sizeForBridgeKey:(id)a0;

@end
