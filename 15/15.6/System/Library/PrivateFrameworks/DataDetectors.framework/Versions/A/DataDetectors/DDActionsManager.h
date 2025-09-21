@class NSMutableSet;

@interface DDActionsManager : NSObject {
    NSMutableSet *_uiElementsInUse;
    char _containsAnchoredElement;
    long long _requestCount;
}

@property char forceWindowAnimationsFromRight;
@property (weak) id delegate;

+ (id)sharedManager;
+ (void)didUseActions;
+ (char)shouldUseActionsWithContext:(id)a0;
+ (void)actionUIClosed;
+ (void)actionUIOpenedWithContext:(id)a0;
+ (void)displayUIForContext:(id)a0 additionalMenuItems:(id)a1;
+ (char)hitWindowIsPopover;
+ (void)runService:(id)a0;
+ (void)setPasteboardString:(id)a0;
+ (void)setPasteboardUrl:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)hasActionsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 actionContext:(id)a1;
- (id)menuItemsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 actionContext:(id)a1;
- (id)menuItemsForTargetURL:(id)a0 actionContext:(id)a1;
- (void)requestBubbleClosureUnanchorOnFailure:(char)a0;
- (id)menuItemsForValue:(id)a0 type:(struct __CFString { } *)a1 service:(id)a2 context:(id)a3;
- (id)actionsForType:(id)a0;
- (void)serviceAnswered;
- (id)UIElements;
- (char)hasActionsForURL:(id)a0 actionContext:(id)a1;
- (void)unanchorBubbles;
- (id)_actionTypeForURL:(id)a0;
- (void)_someWindowDidClose:(id)a0;
- (id)actionTypeForTextCheckingResult:(id)a0 actionContext:(id)a1;
- (id)actionsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
- (id)defaultActionForType:(id)a0;
- (char)hasUIElementInUse;
- (id)menuItemsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1;
- (id)menuItemsForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 context:(id)a1 screenLocation:(struct CGPoint { double x0; double x1; })a2;
- (id)menuItemsForTextCheckingResult:(id)a0 actionContext:(id)a1;
- (id)menuItemsForTextCheckingResult:(id)a0 string:(id)a1 context:(id)a2 screenLocation:(struct CGPoint { double x0; double x1; })a3;
- (void)notifyClientActionDidEnd;
- (void)notifyClientActionWillStart;
- (id)runActionForDictionary:(id)a0;
- (char)runActionFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forTextCheckingResult:(id)a1 context:(id)a2;
- (void)serviceRequested;
- (void)serviceStopped;
- (void)setUIElement:(id)a0 isInUse:(char)a1;

@end
