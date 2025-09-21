@protocol _NSQuickActionItemSource;

@interface _NSQuickActionTouchBarClientItemSourceMonitor : NSObject {
    id<_NSQuickActionItemSource> _itemSource;
    void *_observationInfo;
    BOOL _isObserving;
}

@property (readonly, weak) id<_NSQuickActionItemSource> itemSource;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfItemSource;

- (void *)observationInfo;
- (void)setObservationInfo:(void *)a0;
- (void)dealloc;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
