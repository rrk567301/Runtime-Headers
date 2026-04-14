@class NSData;

@interface PKPaymentApplicationAssociatedReaderCA : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long scheme;
@property (copy, nonatomic) NSData *publicKey;

- (id)asDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 success:(BOOL *)a1;
- (BOOL)isEqualToASCAssociatedReaderIDReaderCA:(id)a0;

@end
