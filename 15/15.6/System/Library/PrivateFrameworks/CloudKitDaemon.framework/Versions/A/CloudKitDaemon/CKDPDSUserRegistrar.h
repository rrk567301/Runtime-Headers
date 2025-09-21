@class PDSUser, PDSRegistrar, NSCache;

@interface CKDPDSUserRegistrar : NSObject

@property (readonly, nonatomic) PDSRegistrar *registrar;
@property (readonly, nonatomic) PDSUser *user;
@property (readonly, nonatomic) NSCache *cache;

- (void).cxx_destruct;
- (id)_cacheKeyForRegistration:(id)a0;
- (char)ensureRegistrationPresent:(id)a0 error:(id *)a1;
- (id)initWithRegistrar:(id)a0 user:(id)a1;
- (char)removeAllRegistrations:(id *)a0;
- (char)removeRegistration:(id)a0 error:(id *)a1;

@end
