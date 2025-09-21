@class NSError;

@interface CNFoundationError : NSObject

@property (class, readonly) NSError *timeoutError;
@property (class, readonly) NSError *userCanceledError;
@property (class, readonly) NSError *notImplementedError;

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithErrno:(int)a0;
+ (char)isTimeoutError:(id)a0;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingException:(id)a1;
+ (id)errorWithErrno;
+ (id)errorWithErrno:(int)a0 userInfo:(id)a1;
+ (id)errorWithErrnoAndUserInfo:(id)a0;
+ (id)ifResultIsNil:(id)a0 setOutputError:(id *)a1 toError:(id)a2;
+ (id)ifResultIsNil:(id)a0 setOutputError:(id *)a1 withBlock:(id /* block */)a2;
+ (char)ifResultIsNo:(char)a0 setOutputError:(id *)a1 toError:(id)a2;
+ (char)ifResultIsNo:(char)a0 setOutputError:(id *)a1 withBlock:(id /* block */)a2;
+ (char)isCanceledError:(id)a0;
+ (char)isCertificateError:(id)a0;
+ (char)isError:(id)a0 errorWithDomain:(id)a1 code:(long long)a2;
+ (char)isFileAlreadyExistsError:(id)a0;
+ (char)isFileNotFoundError:(id)a0;
+ (char)isNotImplementedError:(id)a0;

@end
