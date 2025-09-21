@class NSString;

@interface WFMACAddressDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedMACAddress;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedMessage;
- (id)initWithDisplayedMACAddress:(id)a0;

@end
