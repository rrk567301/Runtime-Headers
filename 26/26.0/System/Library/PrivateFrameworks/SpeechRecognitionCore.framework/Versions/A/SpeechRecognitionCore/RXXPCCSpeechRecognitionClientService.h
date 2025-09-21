@class NSString;
@protocol SRDClientProtocol;

@interface RXXPCCSpeechRecognitionClientService : NSObject <SRDClientProtocol> {
    struct RXXPC { BOOL x0; BOOL x1; BOOL x2; unsigned long long x3; struct __CFString *x4; struct __CFString *x5; id x6; id x7; id x8; unsigned long long x9; struct __CFArray *x10; unsigned long long x11; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x12; } *_xpc;
    id<SRDClientProtocol> _externalServiceClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithRXXPC:(struct RXXPC { BOOL x0; BOOL x1; BOOL x2; unsigned long long x3; struct __CFString *x4; struct __CFString *x5; id x6; id x7; id x8; unsigned long long x9; struct __CFArray *x10; unsigned long long x11; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x12; } *)a0 externalServiceClient:(id)a1;
- (void)legacyClientEventWithMessage:(id)a0;
- (void)pong:(long long)a0;
- (void)recognizedEventWithLegacyMessage:(id)a0 result:(id)a1;

@end
