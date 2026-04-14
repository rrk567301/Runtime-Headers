@class NSString;

@interface ILMessageFilterQueryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *messageBody;
@property (copy, nonatomic) NSString *receiverISOCountryCode;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0;

@end
