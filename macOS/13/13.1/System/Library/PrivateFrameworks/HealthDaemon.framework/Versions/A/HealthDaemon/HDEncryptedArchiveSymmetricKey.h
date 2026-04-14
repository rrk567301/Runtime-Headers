@class NSString, NSData;

@interface HDEncryptedArchiveSymmetricKey : NSObject <HDEncryptedArchiveKey, NSCopying, NSSecureCoding> {
    NSData *_key;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL symmetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomKeyWithError:(id *)a0;
+ (id)fetchFromKeychainForLabel:(id)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)keyDataForEncryptionWithError:(id *)a0;
- (id)keyDataForDecryptionWithError:(id *)a0;
- (BOOL)addToKeychainWithLabel:(id)a0 error:(id *)a1;
- (BOOL)deleteFromKeychainWithLabel:(id)a0 error:(id *)a1;

@end
