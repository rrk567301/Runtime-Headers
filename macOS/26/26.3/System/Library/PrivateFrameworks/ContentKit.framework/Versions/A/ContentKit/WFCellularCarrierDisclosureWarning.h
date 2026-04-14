@class NSString;

@interface WFCellularCarrierDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedCarrierName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedMessage;
- (id)initWithDisplayedCarrierName:(id)a0;

@end
