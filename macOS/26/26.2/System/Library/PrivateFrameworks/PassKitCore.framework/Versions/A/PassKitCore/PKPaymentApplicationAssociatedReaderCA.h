@class NSData;

@interface PKPaymentApplicationAssociatedReaderCA : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long scheme;
@property (copy, nonatomic) NSData *publicKey;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0 success:(BOOL *)a1;
- (BOOL)isEqualToASCAssociatedReaderIDReaderCA:(id)a0;

@end
