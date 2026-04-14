@protocol TRIWKMSAuthenticationProvider;

@interface TRIWKMSKeyFetcher : NSObject {
    id<TRIWKMSAuthenticationProvider> _authProvider;
}

+ (id)cacheStatistics;
+ (void)fetchAndUnwrapKeyWithAuthData:(id)a0 completion:(id /* block */)a1;
+ (id)fetchAndUnwrapKeyWithAuthData:(id)a0 error:(id *)a1;
+ (void)fetchAndUnwrapKeyWithAuthDataString:(id)a0 completion:(id /* block */)a1;
+ (id)fetchAndUnwrapKeyWithAuthDataString:(id)a0 error:(id *)a1;
+ (id)sharedKeyCache;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAuthenticationProvider:(id)a0;
- (id)_selectDefaultAuthenticationProvider;
- (void)fetchAndUnwrapKeyWithAuthData:(id)a0 completion:(id /* block */)a1;
- (id)fetchAndUnwrapKeyWithAuthData:(id)a0 error:(id *)a1;
- (void)fetchAndUnwrapKeyWithAuthDataString:(id)a0 completion:(id /* block */)a1;
- (id)fetchAndUnwrapKeyWithAuthDataString:(id)a0 error:(id *)a1;

@end
