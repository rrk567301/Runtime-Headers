@class NSData;

@interface PKPaymentApplicationAssociatedReaderCA : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long scheme;
@property (copy, nonatomic) NSData *publicKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0 success:(BOOL *)a1;
- (char)isEqualToASCAssociatedReaderIDReaderCA:(id)a0;

@end
