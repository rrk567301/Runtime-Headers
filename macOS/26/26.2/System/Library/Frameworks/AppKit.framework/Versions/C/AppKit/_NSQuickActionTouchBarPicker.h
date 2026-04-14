@class NSTouchBar, NSString, _NSQuickActionTouchBarCollectionViewController;
@protocol _NSQuickActionTouchBarPickerDelegate;

@interface _NSQuickActionTouchBarPicker : NSObject <NSTouchBarDelegate, _NSQuickActionTouchBarCollectionViewControllerDelegate> {
    id<_NSQuickActionTouchBarPickerDelegate> _delegate;
    NSTouchBar *_touchBar;
    _NSQuickActionTouchBarCollectionViewController *_collectionViewController;
    void *_observationInfo;
    BOOL _hasCloseButton;
    BOOL _dismissAfterInvoking;
}

@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfTouchBar;

- (void *)observationInfo;
- (void)setObservationInfo:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)invokeQuickActionForDataSource:(id)a0;
- (void)closeTouchBar;
- (id)initWithDelegate:(id)a0 mode:(long long)a1;
- (void)updateOrderedDataSources:(id)a0;

@end
