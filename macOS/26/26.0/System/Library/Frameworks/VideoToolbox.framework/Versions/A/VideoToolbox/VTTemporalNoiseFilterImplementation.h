@class NSString, VTTemporalNoiseFilterConfiguration;

@interface VTTemporalNoiseFilterImplementation : NSObject <VTFrameProcessorImplementationPrivate> {
    struct OpaqueVTTemporalNoiseFilterInternal { struct OpaqueVTTemporalFilterSession *x0; struct OpaqueVTPixelTransferSession *x1; id x2; id x3; id x4; struct pendingFrameList { struct PendingFrameItem *x0; } x5; struct OpaqueFigSimpleMutex *x6; struct { long long x0; int x1; unsigned int x2; long long x3; } x7; struct { long long x0; int x1; unsigned int x2; long long x3; } x8; int x9; BOOL x10; BOOL x11; } *filterInternal;
}

@property (readonly, nonatomic) VTTemporalNoiseFilterConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)finishProcessing;
- (void)_completeFrames;
- (int)_completeFrame:(struct PendingFrameItem { id x0; id x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; unsigned char x3; unsigned char x4; struct __CVBuffer *x5; int x6; unsigned int x7; id /* block */ x8; struct { struct PendingFrameItem *x0; } x9; } *)a0;
- (struct PendingFrameItem { id x0; id x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; unsigned char x3; unsigned char x4; struct __CVBuffer *x5; int x6; unsigned int x7; id /* block */ x8; struct { struct PendingFrameItem *x0; } x9; } *)_createPendingFrame:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inputFrame:(id)a1;
- (BOOL)_checkForDiscontinuity:(id)a0;
- (void)_clearStaledPendingFramesFromQueue;
- (struct PendingFrameItem { id x0; id x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; unsigned char x3; unsigned char x4; struct __CVBuffer *x5; int x6; unsigned int x7; id /* block */ x8; struct { struct PendingFrameItem *x0; } x9; } *)_findFrameInQueue:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_freePendingFrame:(struct PendingFrameItem { id x0; id x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; unsigned char x3; unsigned char x4; struct __CVBuffer *x5; int x6; unsigned int x7; id /* block */ x8; struct { struct PendingFrameItem *x0; } x9; } *)a0;
- (int)_processFrame:(id)a0 outputFrame:(id)a1 useClientProvidedOutputFrame:(unsigned char)a2;
- (int)_processReferenceFrameIfNotProcessed:(id)a0;
- (int)_processSourceFrameIfNotProcessed:(id)a0 completionHandler:(id /* block */)a1;
- (int)_setFilterStrength:(int)a0;
- (BOOL)_validateParameters:(id)a0 error:(id *)a1;
- (void)handleEmittedFrame:(struct __CVBuffer { } *)a0 presentationTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 status:(int)a2 infoFlags:(unsigned int)a3;
- (BOOL)processWithParams:(id)a0 completionHandler:(id /* block */)a1 error:(id *)a2;
- (BOOL)processWithParams:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithConfiguration:(id)a0 error:(id *)a1;

@end
