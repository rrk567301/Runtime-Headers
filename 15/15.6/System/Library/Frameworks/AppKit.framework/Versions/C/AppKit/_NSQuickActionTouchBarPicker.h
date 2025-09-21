@class NSTouchBar, NSString, _NSQuickActionTouchBarCollectionViewController;
@protocol _NSQuickActionTouchBarPickerDelegate;

@interface _NSQuickActionTouchBarPicker : NSObject <NSTouchBarDelegate, _NSQuickActionTouchBarCollectionViewControllerDelegate> {
    id<_NSQuickActionTouchBarPickerDelegate> _delegate;
    NSTouchBar *_touchBar;
    _NSQuickActionTouchBarCollectionViewController *_collectionViewController;
    void *_observationInfo;
    char _hasCloseButton;
    char _dismissAfterInvoking;
}

@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)accessInstanceVariablesDirectly;
+ (char)automaticallyNotifiesObserversOfTouchBar;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setObservationInfo:(void *)a0;
- (void *)observationInfo;
- (void)invokeQuickActionForDataSource:(id)a0;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)closeTouchBar;
- (id)initWithDelegate:(id)a0 mode:(long long)a1;
- (void)updateOrderedDataSources:(id)a0;

@end
