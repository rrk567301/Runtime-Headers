@class NSString, NSArray;

@interface CPXModernEventProcessor : NSObject <CPXEventProcessor> {
    struct CGXSession { unsigned int x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct CGXCredentials { unsigned int x0; unsigned int x1; } x6; struct CGXCredentials { unsigned int x0; unsigned int x1; } x7; BOOL x8; char *x9; char *x10; char **x11; BOOL x12; BOOL x13; BOOL x14; id x15; unsigned int x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; unsigned int x21; unsigned int x22; struct __CFDictionary *x23; struct __CFDictionary *x24; struct __CFDictionary *x25; unsigned int x26; unsigned int x27; BOOL x28; struct CGXSessionWindowData *x29; struct ZoomManager *x30; struct CGXSessionDisplayZoomData *x31; struct WSSessionWorkspaceData *x32; struct CGXSessionConnectionData *x33; struct CGXSessionConfigurationData *x34; struct WSSessionDisplayPreferencesData *x35; struct CGXSessionDFRData *x36; struct CGXSessionEventData *x37; struct CGXSessionPackageData *x38; struct CGXSessionProcessData *x39; struct CGXSessionDisplayData *x40; struct WSDisplaySessionData *x41; struct WSSessionDisplayConfigData *x42; struct WSCursorData *x43; struct CGXSessionDisplayStreamData *x44; struct WSMessageTraceSessionData *x45; struct WSSessionStructuralRegionData *x46; struct CGXSessionHMDData *x47; struct WSSessionDisplayUpdateData *x48; struct DesktopEffectsSessionData *x49; struct SchedulerSessionData *x50; void *x51; unsigned long long x52; struct WSSessionCaptureData *x53; int x54; int x55; BOOL x56; struct CGXWindow *x57; struct CGXWindow *x58; struct CGXWindow *x59; unsigned int x60; BOOL x61; unsigned int x62; double x63; BOOL x64; BOOL x65; struct CGXSessionWindowOverrideResolutionData *x66; struct CGXSessionWindowPixelDimensionsHintData *x67; struct CGXSessionUtilityDisplayControllerData *x68; int x69; int x70; } *_session;
    NSArray *_subProcessors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clearEventState;
- (long long)processEvent:(struct _SLSEventRecord { } *)a0 context:(struct CPXEventProcessorContext { struct CGXSession *x0; struct CGXSessionProcessData *x1; struct CPSProcessRec *x2; } *)a1 dispatcher:(id)a2;

@end
