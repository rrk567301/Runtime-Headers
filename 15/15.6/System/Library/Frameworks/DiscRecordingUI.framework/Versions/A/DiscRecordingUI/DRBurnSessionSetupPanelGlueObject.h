@class NSString, NSWindow;

@interface DRBurnSessionSetupPanelGlueObject : NSObject <NSWindowDelegate> {
    struct DRBurnSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRBurn *x7; void *x8; void *x9; } *_session;
    struct DRBurnSessionSetupCallbacks { unsigned int version; void /* function */ *deviceShouldBeTarget; void /* function */ *containsSuitableMedia; void /* function */ *deviceSelectionChanged; } _callbacks;
    NSWindow *_parentWindow;
    char _delegateHandlesReservations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setParentWindow:(id)a0;
- (id)initWithSession:(struct DRBurnSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct __DRBurn *x7; void *x8; void *x9; } *)a0;
- (void)setCallbacks:(struct DRBurnSessionSetupCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; } *)a0;
- (char)setupPanel:(id)a0 deviceCouldBeTarget:(id)a1;
- (int)runSetupPanelWithOptions:(struct DRBurnSessionSetupDialogOptions { unsigned int x0; unsigned int x1; struct __CFString *x2; } *)a0;
- (char)setupPanel:(id)a0 deviceContainsSuitableMedia:(id)a1 promptString:(id *)a2;
- (void)setupPanelDeviceSelectionChanged:(id)a0;
- (char)setupPanelShouldHandleMediaReservations:(id)a0;

@end
