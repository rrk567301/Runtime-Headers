@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKEncryptable, CKRecordValue, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSData *data;
@property (copy) NSData *encryptedData;
@property (readonly, nonatomic) char needsEncryption;
@property (readonly, nonatomic) char needsDecryption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)value;
- (id)initWithValue:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)CKPropertiesDescription;
- (id)initWithEncryptedData:(id)a0;

@end
