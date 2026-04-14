@protocol CPKTargetProvider, CPKPopoverDelegate;

@interface CPKPopover : NSPopover {
    id _CPKPrivate;
}

@property id<CPKPopoverDelegate> CPKDelegate;
@property id<CPKTargetProvider> CPKTargetProvider;
@property void *CPKUserInfo;

+ (id)transformWindowButtonToExpand:(BOOL)a0;
+ (id)characterPickerToolbarItem:(id)a0;
+ (void)logCurrentTimeWithLabel:(id)a0 forLogType:(id)a1;
+ (id)logArrayForLogType:(id)a0;
+ (id)performanceLogWithBaseTime:(double)a0;

- (void)dealloc;
- (id)init;
- (void)close;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setDataSource:(id)a0;
- (void)makeKeyWindow;
- (void)cancelOperation:(id)a0;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (id)searchString;
- (BOOL)popoverShouldDetach:(id)a0;
- (id)detachableWindowForPopover:(id)a0;
- (id)initWithDataSource:(id)a0;
- (id)_actionTarget;
- (id)_privateStorage;
- (void)characterDidSelected:(id)a0;
- (void)windowWillClosed:(id)a0;
- (void)_characterViewerWillOpen:(id)a0;
- (void)_characterViewerDidOpen:(id)a0;
- (BOOL)showingLargeWindow;
- (id)alternateLargeWindow;
- (void)setShowingLargeWindow:(BOOL)a0;
- (void)informClosingDetachedWindow:(id)a0;
- (void)setDataSource:(id)a0 usingBlockOnMainThread:(id /* block */)a1;
- (BOOL)_isValidTarget:(id)a0;
- (void)_insertSelectedCharacter:(id)a0 toTarget:(id)a1;
- (void)_showPopoverFromToolbarItem:(id)a0;
- (void)_showPopoverFromToolbarMenu:(id)a0;
- (void)_popoverDidOpen:(id)a0;
- (void)_popoverDidClose:(id)a0;
- (void)_emojiBarDidDismiss:(id)a0;
- (void)_externalCharacterViewerWindowOpened:(id)a0;
- (void)_externalCharacterViewerWindowRevertedToPicker:(id)a0;
- (void)_popoverWillOpen;
- (void)_showPopoverByCallingSuperclass;
- (id)detachedWindowCreate:(BOOL)a0;
- (void)setDetachedWindowLevel:(long long)a0;
- (void)setAlternateLargeWindow:(id)a0;
- (void)_targetTextViewSelectionChanged:(id)a0;
- (void)setDisplayAsWindow:(BOOL)a0 preferredLoc:(struct CGPoint { double x0; double x1; })a1;
- (void)_postCharacterPickerOpenedNotification;
- (void)setEmojiIMViewState:(id)a0;
- (void)transformWindow;
- (void)setShowOpeningAnimation:(BOOL)a0;

@end
