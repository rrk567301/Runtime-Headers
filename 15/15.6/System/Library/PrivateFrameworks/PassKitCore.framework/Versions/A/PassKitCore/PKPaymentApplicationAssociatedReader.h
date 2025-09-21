@class NSData, NSSet;

@interface PKPaymentApplicationAssociatedReader : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *readerIdentifier;
@property (copy, nonatomic) NSSet *readerCAs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)redactedDescription;
- (id)asDictionary;
- (char)isEqualToPaymentApplicationAssociatedReader:(id)a0;

@end
