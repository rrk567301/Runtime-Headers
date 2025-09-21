@class NSString;

@interface ILMessageFilterCapabilitiesQueryRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0;
- (char)isEqualToRequest:(id)a0;

@end
