@class NSUUID;

@interface BackendXPC : NSObject <NSSecureCoding, NSCoding> {
    struct shared_ptr<crypto::header> { struct header *__ptr_; struct __shared_weak_count *__cntrl_; } _cryptoHeader;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct shared_ptr<Backend> { struct Backend *__ptr_; struct __shared_weak_count *__cntrl_; } backend;
@property (readonly, copy, nonatomic) NSUUID *instanceID;
@property (readonly, nonatomic) void *cryptoHeader;

+ (id)newFileBackendWithURL:(id)a0 fileOpenFlags:(int)a1 error:(id *)a2;

- (BOOL)isUnlocked;
- (int)lock;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct expected<std::shared_ptr<Backend>, std::error_code> { struct __conditional_no_unique_address<true, std::__expected_base<std::shared_ptr<Backend>, std::error_code>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<std::shared_ptr<Backend>, std::error_code>::__union_t> { union __union_t { struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } x0; struct error_code { int x0; struct error_category *x1; } x1; } x0; } x0; BOOL x1; } x0; } x0; })getCryptoHeaderBackend;
- (id)newWithCryptoFormat:(const void *)a0 error:(id *)a1;
- (void)replaceWithBackendXPC:(id)a0;
- (BOOL)tryCreatingCryptoHeader;

@end
