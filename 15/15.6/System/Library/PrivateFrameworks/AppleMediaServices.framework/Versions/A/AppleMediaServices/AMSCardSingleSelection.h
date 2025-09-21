@class NSString;

@interface AMSCardSingleSelection : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *passTypeIdentifier;
@property (copy) NSString *passSerialNumber;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;

@end
