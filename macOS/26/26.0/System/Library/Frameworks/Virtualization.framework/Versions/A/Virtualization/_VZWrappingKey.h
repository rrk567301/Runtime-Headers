@interface _VZWrappingKey : NSObject <NSCopying> {
    struct unique_ptr<Base::Crypto::WrappingKey, std::default_delete<Base::Crypto::WrappingKey>> { struct WrappingKey *__ptr_; } _wrappingKey;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAESKey:(id)a0 error:(id *)a1;
- (id)initWithAsymmetricKey:(struct __SecKey { } *)a0 error:(id *)a1;
- (id)initWithPassword:(id)a0 error:(id *)a1;

@end
