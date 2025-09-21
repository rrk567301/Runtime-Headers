@interface CPLErrors : NSObject

+ (id)notImplementedError;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1;
+ (id)operationCancelledError;
+ (id)unknownError;
+ (id)unsafeResources:(id)a0 withError:(id)a1 resourceStorage:(id)a2;
+ (id)cplErrorCausedBySharedSyncForError:(id)a0;
+ (id)cplErrorWithCode:(long long)a0 description:(id)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3;
+ (id)cplErrorWithCode:(long long)a0 underlyingError:(id)a1 userInfo:(id)a2 description:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
+ (id)errorsForIdentifiers:(id)a0 error:(id)a1;
+ (id)incorrectMachineStateErrorWithReason:(id)a0;
+ (id)incorrectParametersErrorForParameter:(id)a0;
+ (id)invalidClientCacheErrorWithReason:(id)a0;
+ (id)invalidCloudCacheErrorWithReason:(id)a0;
+ (id)invalidDaemonErrorWithConnectionError:(id)a0;
+ (id)invalidScopeErrorWithScopeIdentifier:(id)a0;
+ (id)invalidScopeErrorWithScopeIndex:(long long)a0;
+ (id)invalidScopeErrorWithScopedIdentifier:(id)a0;
+ (id)libraryClosedError;
+ (id)libraryDoesNotAutoOpenError;
+ (id)missingError;
+ (id)posixErrorForURL:(id)a0;
+ (id)posixErrorForURL:(id)a0 errorCode:(int)a1;
+ (id)preventWipeErrorWithReason:(id)a0 preventedByUser:(char)a1;
+ (id)readOnlyError;
+ (id)sessionHasBeenDeferredError;
+ (id)tooManyOpenedEnginesError;
+ (id)transportErrorFromTransportError:(id)a0;
+ (id)underlyingErrorWithReason:(id)a0;
+ (id)unknownPrimaryScope;
+ (id)unsafeResources:(id)a0 withError:(id)a1 realPrune:(char)a2 resourceStorage:(id)a3;
+ (id)versionMismatchError;

@end
