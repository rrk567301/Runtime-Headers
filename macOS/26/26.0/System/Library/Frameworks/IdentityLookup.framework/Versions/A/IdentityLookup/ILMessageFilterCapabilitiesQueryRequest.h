@class NSString;

@interface ILMessageFilterCapabilitiesQueryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtensionIdentifier:(id)a0;

@end
