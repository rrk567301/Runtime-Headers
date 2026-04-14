@class NSData, NSSet;

@interface PKPaymentApplicationAssociatedReader : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *readerIdentifier;
@property (copy, nonatomic) NSSet *readerCAs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPaymentApplicationAssociatedReader:(id)a0;

@end
