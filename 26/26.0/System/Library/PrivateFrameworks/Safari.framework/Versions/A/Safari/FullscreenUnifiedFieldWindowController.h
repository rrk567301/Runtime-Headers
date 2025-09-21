@class NSString, PopupWindowUnifiedFieldViewController, BrowserViewController, PopupWindowUnifiedField, NSTitlebarAccessoryViewController, NSWindow;

@interface FullscreenUnifiedFieldWindowController : NSController <UnifiedFieldDelegate> {
    BrowserViewController *_browserViewController;
    PopupWindowUnifiedFieldViewController *_unifiedFieldViewController;
    NSTitlebarAccessoryViewController *_titlebarBottomSeparatorViewController;
    NSWindow *_window;
}

@property (readonly, nonatomic) PopupWindowUnifiedField *unifiedField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)unifiedFieldAllowPrivacyReportPopover:(id)a0;
- (id)unifiedField:(id)a0 contextMenuForEvent:(id)a1;
- (BOOL)unifiedFieldShouldAllowCloseButton:(id)a0;
- (void)unifiedFieldWasClicked:(id)a0;
- (BOOL)unifiedFieldShouldSelectAllAfterMouseDown:(id)a0;
- (void)unifiedFieldDidChangePageTitle:(id)a0;
- (void)unifiedFieldDidMoveToWindow:(id)a0;
- (void)unifiedFieldURLDropped:(id)a0;
- (BOOL)unifiedFieldCanDragToReorder:(id)a0;
- (id)unifiedFieldReaderMenu:(id)a0;
- (id)unifiedFieldTranslationMenu:(id)a0;
- (id)unifiedFieldFallbackURLForAboutBlank:(id)a0;
- (void)unifiedFieldMarkedTextDidChange:(id)a0;
- (BOOL)unifiedFieldShouldCenter:(id)a0;
- (void)unifiedFieldStartDragging:(id)a0;
- (void)unifiedFieldUpdateFaviconInsetsAndBacking:(id)a0;
- (void)unifiedFieldPerSitePreferencesContextMenuItemWasSelected:(id)a0;
- (double)unifiedFieldWidthForActiveTab:(id)a0;
- (void)unifiedFieldPerformAudioIndicatorAction:(id)a0;
- (void)unifiedFieldResignedFirstResponder:(id)a0;
- (void)unifiedFieldPerformRightmostButtonAction:(id)a0;
- (BOOL)unifiedFieldShouldBehaveAsSingleTab:(id)a0;
- (BOOL)unifiedFieldShouldUseActiveAppearance:(id)a0;
- (BOOL)unifiedFieldAllowMoreMenu:(id)a0;
- (double)unifiedFieldMaxAvailableWidth:(id)a0;
- (void)unifiedFieldBecameFirstResponder:(id)a0;
- (void)_setUpPopupWindow;
- (void)unifiedFieldCloseActiveTab:(id)a0;
- (void)unifiedFieldAutocompleteSelectionDidChange:(id)a0;
- (BOOL)unifiedFieldCanShowPerSitePreferences:(id)a0;
- (void)unifiedFieldStartDraggingWindow:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)unifiedFieldReloadMenu:(id)a0 isInMoreMenu:(BOOL)a1;
- (id)unifiedFieldAudioIndicatorMenu:(id)a0;
- (void)unifiedFieldSearchButtonWasClicked:(id)a0;
- (void)unifiedFieldStartReordering:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)unifiedFieldToggleAssistant;
- (id)unifiedFieldTitlebarColorForPlaceholder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)unifiedFieldAllowAssistant:(id)a0;
- (id)bookmarkToDragFromSiteIconInUnifiedField:(id)a0;
- (BOOL)unifiedFieldShouldAllowShareOption:(id)a0;
- (id)unifiedFieldTitlebarColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)unifiedFieldIsInteractivelyClosingTabs:(id)a0;
- (void)_updateUnifiedFieldText;
- (id)initWithBrowserViewController:(id)a0 fullscreenWindow:(id)a1;

@end
