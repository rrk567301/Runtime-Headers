@class AKPageController, NSString;

@interface AKMainEventHandler_Mac : AKMainEventHandler <NSMenuItemValidation>

@property (retain) id eventMonitor;
@property char shouldEatNextKeyUp;
@property (weak) AKPageController *lastPageControllerWithCropRollover;
@property char lastCursorWasInVisibleBounds;
@property char candidatePickerWasDismissed;
@property char isTornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)teardown;
- (id)initWithController:(id)a0;
- (char)validateMenuItem:(id)a0;
- (char)handleKeyboardEvent:(id)a0;
- (void)_addNoteAnnotationAction:(id)a0;
- (void)_bringSelectedAnnotationsForwardAction:(id)a0;
- (void)_bringSelectedAnnotationsToFrontAction:(id)a0;
- (void)_candidatePickerDidDismissNotification:(id)a0;
- (char)_eventHasValidLocation:(id)a0;
- (char)_eventIsForOurWindow:(id)a0;
- (void)_highlightMenuAction:(id)a0;
- (char)_mouseEventInVisibleBounds:(id)a0;
- (void)_removeHighlightAnnotationAction:(id)a0;
- (void)_removeNoteAnnotationAction:(id)a0;
- (void)_sendSelectedAnnotationsBackwardAction:(id)a0;
- (void)_sendSelectedAnnotationsToBackAction:(id)a0;
- (void)_showContextMenuForEvent:(id)a0 withAnnotation:(id)a1 onPageController:(id)a2;
- (char)_validateChangingSelectionZOrderForDirection:(char)a0 onPageModelController:(id)a1;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)a0 orRecognizer:(id)a1;
- (char)handleRightDownEvent:(id)a0;
- (char)mainHandleEvent:(id)a0 orRecognizer:(id)a1;
- (void)updateCursorForEvent:(id)a0;

@end
