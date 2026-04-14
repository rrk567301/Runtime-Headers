@class NSString, NSDictionary;

@interface ILClassificationReportRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSDictionary *jsonDictionary;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0 jsonDictionary:(id)a1;

@end
