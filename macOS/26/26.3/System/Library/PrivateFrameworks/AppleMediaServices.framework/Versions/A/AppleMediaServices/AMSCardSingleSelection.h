@class NSString;

@interface AMSCardSingleSelection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *passTypeIdentifier;
@property (copy) NSString *passSerialNumber;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;

@end
