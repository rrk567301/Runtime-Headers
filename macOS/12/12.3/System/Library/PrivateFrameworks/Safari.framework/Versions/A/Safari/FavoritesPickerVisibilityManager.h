@class NSTextInputContext, BlockCoalescer;
@protocol FavoritesPickerVisibilityController, FavoritesPickerVisibilityManagerDataSource;

@interface FavoritesPickerVisibilityManager : NSObject {
    BOOL _observingKeyboardInputSourceOverlayVisibility;
    NSTextInputContext *_textInputContextBeingObserved;
    BlockCoalescer *_visibilityUpdateCoalescer;
}

@property (weak, nonatomic) id<FavoritesPickerVisibilityController> pickerVisibilityController;
@property (weak, nonatomic) id<FavoritesPickerVisibilityManagerDataSource> dataSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)browserViewControllerDidFirstMeaningfulPaint:(id)a0;
- (void)registerForWindowNotifications;
- (void)unregisterFromWindowNotifications;
- (void)unregisterFromNotificationsForUnifiedFieldCompletionController:(id)a0;
- (void)backgroundLoadControllerDidCommitBackgroundLoad;
- (void)startObservingKeyboardMethodsBarVisibility;
- (void)stopObservingKeyboardMethodsBarVisibility;
- (void)registerForNotificationsForUnifiedFieldCompletionController:(id)a0;
- (void)_showFavoritesPickerFromFavoritesBeingInstalledNotification:(id)a0;
- (void)_showFavoritesPickerFromUnifiedFieldNotification:(id)a0;
- (void)_dismissFavoritesPicker:(id)a0;
- (void)_observeKeyboardInputSourceOverlayVisibilityIfNeeded;
- (void)_stopObservingKeyboardInputSourceOverlayVisibility;
- (void)_scheduleFavoritesPickerToBeDismissed;
- (BOOL)_isInputMethodsBarVisible;
- (void)_scheduleFavoritesPickerToBeShown;

@end
