@class NSString;

@interface WFMACAddressDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedMACAddress;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)localizedMessage;
- (id)initWithDisplayedMACAddress:(id)a0;

@end
