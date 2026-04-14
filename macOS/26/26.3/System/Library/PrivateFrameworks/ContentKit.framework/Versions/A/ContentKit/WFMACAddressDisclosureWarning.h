@class NSString;

@interface WFMACAddressDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedMACAddress;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedMessage;
- (id)initWithDisplayedMACAddress:(id)a0;

@end
