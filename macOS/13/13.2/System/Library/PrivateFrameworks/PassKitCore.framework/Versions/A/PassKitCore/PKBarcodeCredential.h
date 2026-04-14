@class NSString, PKEncryptedDataObject, NSDate;

@interface PKBarcodeCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *expirationTimestamp;
@property (retain, nonatomic) PKEncryptedDataObject *value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
