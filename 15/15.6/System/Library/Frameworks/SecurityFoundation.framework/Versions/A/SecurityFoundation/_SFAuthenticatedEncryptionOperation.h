@class NSString, _SFAESKeySpecifier;

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation> {
    id _authenticatedEncryptionOperationInternal;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier;
@property (nonatomic) long long authenticationMode;
@property (nonatomic) long long authenticationCodeLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_defaultAuthenticationMode;
+ (id)_defaultEncryptionOperation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)decrypt:(id)a0 withKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
- (id)decrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)encrypt:(id)a0 withKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
- (id)encrypt:(id)a0 withKey:(id)a1 additionalAuthenticatedData:(id)a2 ivGenerator:(id)a3 error:(id *)a4;
- (id)encrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)encrypt:(id)a0 withKey:(id)a1 ivGenerator:(id)a2 error:(id *)a3;
- (id)initWithKeySpecifier:(id)a0;
- (id)initWithKeySpecifier:(id)a0 authenticationMode:(long long)a1;

@end
