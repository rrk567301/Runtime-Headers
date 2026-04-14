@interface CPLErrors : NSObject

+ (id)notImplementedError;
+ (id)unsafeResources:(id)a0 withError:(id)a1 resourceStorage:(id)a2;
+ (id)operationCancelledError;
+ (id)invalidDaemonErrorWithConnectionError:(id)a0;
+ (id)unknownError;
+ (id)errorsForIdentifiers:(id)a0 error:(id)a1;
+ (id)libraryClosedError;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1;
+ (id)incorrectParametersErrorForParameter:(id)a0;
+ (id)sessionHasBeenDeferredError;
+ (id)incorrectMachineStateErrorWithReason:(id)a0;
+ (id)versionMismatchError;
+ (id)invalidClientCacheErrorWithReason:(id)a0;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3;
+ (id)posixErrorForURL:(id)a0;
+ (id)invalidScopeErrorWithScopedIdentifier:(id)a0;
+ (id)invalidScopeErrorWithScopeIdentifier:(id)a0;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1 arguments:(char *)a2;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3 arguments:(char *)a4;
+ (id)unsafeResources:(id)a0 withError:(id)a1 realPrune:(BOOL)a2 resourceStorage:(id)a3;
+ (id)underlyingErrorWithReason:(id)a0;
+ (id)invalidScopeErrorWithScopeIndex:(long long)a0;
+ (id)unknownPrimaryScope;
+ (id)readOnlyError;
+ (id)transportErrorFromTransportError:(id)a0;
+ (id)invalidCloudCacheErrorWithReason:(id)a0;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2 arguments:(char *)a3;
+ (id)missingError;

@end
