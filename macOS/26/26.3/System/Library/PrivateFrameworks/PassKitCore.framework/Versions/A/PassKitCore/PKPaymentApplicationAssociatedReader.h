@class NSData, NSSet;

@interface PKPaymentApplicationAssociatedReader : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *readerIdentifier;
@property (copy, nonatomic) NSSet *readerCAs;

- (id)asDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPaymentApplicationAssociatedReader:(id)a0;

@end
