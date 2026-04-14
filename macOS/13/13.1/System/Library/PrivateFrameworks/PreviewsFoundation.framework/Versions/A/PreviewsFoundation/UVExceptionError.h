@class NSException;

@interface UVExceptionError : NSError

@property (readonly, nonatomic) NSException *exception;

- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)initWithException:(id)a0;

@end
