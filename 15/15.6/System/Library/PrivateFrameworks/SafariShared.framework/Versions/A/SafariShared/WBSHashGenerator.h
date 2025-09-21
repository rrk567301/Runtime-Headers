@class NSData;

@interface WBSHashGenerator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *key;
@property (readonly, copy, nonatomic) NSData *keyID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_createEncryptionKeyData;
- (id)_createEncryptionKeyIDDataUsingKey:(id)a0;
- (id)generateHashStringWithComponents:(id)a0;
- (id)generateHashWithComponents:(id)a0;
- (id)initWithKey:(id)a0 keyID:(id)a1;

@end
