@class NSMutableSet;

@interface DDActionsManager : NSObject {
    NSMutableSet *_uiElementsInUse;
    BOOL _containsAnchoredElement;
    long long _requestCount;
}

@property BOOL forceWindowAnimationsFromRight;
@property (weak) id delegate;

+ (id)sharedManager;
+ (void)didUseActions;
+ (BOOL)shouldUseActionsWithContext:(id)a0;
+ (void)actionUIClosed;
+ (void)actionUIOpenedWithContext:(id)a0;
+ (void)displayUIForContext:(id)a0 additionalMenuItems:(id)a1;
+ (BOOL)hitWindowIsPopover;
+ (void)runService:(id)a0;
+ (void)setPasteboardString:(id)a0;
+ (void)setPasteboardUrl:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasActionsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 actionContext:(id)a1;
- (id)menuItemsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 actionContext:(id)a1;
- (id)menuItemsForTargetURL:(id)a0 actionContext:(id)a1;
- (void)requestBubbleClosureUnanchorOnFailure:(BOOL)a0;
- (id)menuItemsForValue:(id)a0 type:(struct __CFString { } *)a1 service:(id)a2 context:(id)a3;
- (id)actionsForType:(id)a0;
- (BOOL)hasActionsForURL:(id)a0 actionContext:(id)a1;
- (id)UIElements;
- (void)unanchorBubbles;
- (id)_actionTypeForURL:(id)a0;
- (void)serviceAnswered;
- (void)_someWindowDidClose:(id)a0;
- (id)actionTypeForTextCheckingResult:(id)a0 actionContext:(id)a1;
- (id)actionsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
- (id)actionsForType:(id)a0 actionContext:(id)a1;
- (id)defaultActionForType:(id)a0;
- (BOOL)hasUIElementInUse;
- (id)menuItemsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1;
- (id)menuItemsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1 screenLocation:(struct CGPoint { double x0; double x1; })a2;
- (id)menuItemsForRootType:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 textCheckingResult:(id)a2 URL:(id)a3 context:(id)a4;
- (id)menuItemsForTextCheckingResult:(id)a0 actionContext:(id)a1;
- (id)menuItemsForTextCheckingResult:(id)a0 string:(id)a1 context:(id)a2 screenLocation:(struct CGPoint { double x0; double x1; })a3;
- (void)notifyClientActionDidEnd;
- (void)notifyClientActionWillStart;
- (id)prependActionsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 actions:(id)a1;
- (id)runActionForDictionary:(id)a0;
- (BOOL)runActionFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forTextCheckingResult:(id)a1 context:(id)a2;
- (void)serviceRequested;
- (void)serviceStopped;
- (void)setUIElement:(id)a0 isInUse:(BOOL)a1;

@end
