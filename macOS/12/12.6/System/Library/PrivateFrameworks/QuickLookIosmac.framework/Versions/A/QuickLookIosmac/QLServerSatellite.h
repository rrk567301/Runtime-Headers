@class NSFileCoordinator, NSArray, NSString, NSOperationQueue, NSUUID, NSObject, NSMapTable;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface QLServerSatellite : NSObject {
    NSUUID *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSMapTable *_requests;
    NSMapTable *_requestReplyBlocks;
    int _architecture;
    BOOL _shouldDie;
    int _satelliteError;
}

@property (retain, nonatomic) NSFileCoordinator *coordinator;
@property (retain, nonatomic) NSOperationQueue *coordinationQueue;
@property (readonly) BOOL forExternalGenerators;
@property (retain) NSArray *generatorIDs;
@property (copy) NSString *sandboxVariant;
@property (copy) NSString *customName;
@property BOOL forThumbnailAgent;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_connect;
- (void)_handleMessage:(id)a0;
- (void)cancelRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0;
- (void)_connectionLost;
- (void)_sendSetupMessageWithInitialRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0;
- (void)_requestDone:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0 success:(BOOL)a1;
- (void)_handleFailure:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0 message:(id)a1 error:(int)a2;
- (int)_handleHangProblem;
- (void)_handleRequestReplyIfNeeded:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0 fromMessage:(id)a1;
- (void)_killSatellite;
- (void)_handleUsageProblem:(int)a0;
- (void)_handleGenerationWillBeginMessage:(id)a0;
- (void)_handleGenerationDidStart:(id)a0;
- (void)_handleGenerationStartNewAttachment:(id)a0;
- (void)_handleGenerationGotMoreData:(id)a0;
- (void)_handleUsageAlertMessage:(id)a0;
- (void)_handleGenerationComplete:(id)a0;
- (id)initWithIdentifier:(id)a0 forExternalGenerators:(BOOL)a1 architecture:(int)a2;
- (void)enqueueRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0 completionBlock:(id /* block */)a1;
- (BOOL)hasRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0;

@end
