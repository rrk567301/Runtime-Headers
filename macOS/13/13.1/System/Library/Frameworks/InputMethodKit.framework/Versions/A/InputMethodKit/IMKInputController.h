@class IMKInputControllerPrivate;

@interface IMKInputController : NSObject <IMKStateSetting, IMKMouseHandling> {
    IMKInputControllerPrivate *_private;
}

+ (id)currentController;
+ (id)currentClientWrapper;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)menu;
- (void)setServer:(id)a0;
- (id)server;
- (id)_xpcConnection;
- (id)client;
- (void)activateServer:(id)a0;
- (void)deactivateServer:(id)a0;
- (id)valueForTag:(long long)a0 client:(id)a1;
- (void)setValue:(id)a0 forTag:(long long)a1 client:(id)a2;
- (id)modes:(id)a0;
- (unsigned long long)recognizedEvents:(id)a0;
- (void)sendInputSessionSessAction:(unsigned int)a0 client:(id)a1;
- (void)sendInputSessionSessAction:(unsigned int)a0 timestamp:(double)a1 withInfo:(id)a2 client:(id)a3;
- (void)ironwoodTextWasCorrected:(id)a0 client:(id)a1;
- (void)ironwoodPlaceholderWasInvalidated:(id)a0 client:(id)a1;
- (void)commitComposition;
- (void)hidePalettes;
- (void)doCommandBySelector:(SEL)a0 commandDictionary:(id)a1;
- (void)invalidateClientGeometry;
- (void)setInputMethodProperty:(unsigned long long)a0 value:(id)a1;
- (struct CGSize { double x0; double x1; })setAllowsCollapsingCandidateList:(BOOL)a0;
- (id)_proxyConnection;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })replacementRange;
- (void)showPreferences:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRange;
- (void)cancelComposition;
- (BOOL)_usesXPC;
- (void)sendInputSessionSessAction:(unsigned int)a0 timestamp:(double)a1 client:(id)a2;
- (BOOL)mouseDownOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 continueTracking:(BOOL *)a3 client:(id)a4;
- (BOOL)mouseUpOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (BOOL)mouseMovedOnCharacterIndex:(unsigned long long)a0 coordinate:(struct CGPoint { double x0; double x1; })a1 withModifier:(unsigned long long)a2 client:(id)a3;
- (id)candidates:(id)a0;
- (id)originalString:(id)a0;
- (id)composedString:(id)a0;
- (id)initWithServer:(id)a0 delegate:(id)a1 client:(id)a2;
- (void)updateComposition;
- (id)compositionAttributesAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)markChromaticRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)markForStyle:(long long)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)annotationSelected:(id)a0 forCandidate:(id)a1;
- (void)candidateSelectionChanged:(id)a0;
- (void)candidateSelected:(id)a0;
- (void)setClientDOProxy:(id)a0;
- (void)inputControllerWillClose;
- (id)functionRowItemTextInputViewController;
- (id)functionRowItemCPButtonViewController;
- (void)setSimulatorClient:(id)a0;
- (void)performViewBridgeSafeOperation:(id /* block */)a0;
- (BOOL)allowsCollapsingCandidateList;

@end
