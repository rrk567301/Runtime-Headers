@class NSString;

@interface ILMessageFilterReportRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *messageBody;
@property (copy, nonatomic) NSString *receiverISOCountryCode;
@property (nonatomic) long long suggestedAction;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0;
- (char)isEqualToRequest:(id)a0;

@end
