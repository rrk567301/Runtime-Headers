@class NSString;

@interface CPXRemoteViewEventServerDefaultConfig : NSObject <CPXRemoteViewEventServerConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceInterface;
- (id)listenerService;
- (id)listenerDomain;
- (id)remoteViewEventManagerForConnection:(id)a0;
- (void)signEvent:(struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct SLSEventRecord *x2; } *)a0 signingKey:(struct __SLSSigningKey { } *)a1;
- (id)signingKeyForConnection:(id)a0;
- (BOOL)verifyEventOrder:(struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct SLSEventRecord *x2; } *)a0 mostRecentEventTime:(unsigned long long)a1;
- (BOOL)verifyEventSignature:(struct __CGEvent { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned int x1; struct SLSEventRecord *x2; } *)a0 signingKey:(struct __SLSSigningKey { } *)a1;

@end
