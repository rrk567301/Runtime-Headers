@class NSString;

@interface PKTransitAppletStateDirty : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *dpanIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplication:(id)a1;
- (char)isEqualToPKTransitAppletStateDirty:(id)a0;

@end
