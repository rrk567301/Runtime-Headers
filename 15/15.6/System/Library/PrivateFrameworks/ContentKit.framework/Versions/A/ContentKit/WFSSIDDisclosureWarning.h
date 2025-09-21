@class NSString;

@interface WFSSIDDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedNetworkName;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedMessage;
- (id)initWithDisplayedNetworkName:(id)a0;

@end
