@class NSData, NSSet;

@interface PKPaymentApplicationAssociatedReader : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *readerIdentifier;
@property (copy, nonatomic) NSSet *readerCAs;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToPaymentApplicationAssociatedReader:(id)a0;

@end
