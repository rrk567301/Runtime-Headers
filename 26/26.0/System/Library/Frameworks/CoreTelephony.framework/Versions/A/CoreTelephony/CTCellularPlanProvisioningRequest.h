@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *matchingID;
@property (retain, nonatomic) NSString *OID;
@property (retain, nonatomic) NSString *confirmationCode;
@property (retain, nonatomic) NSString *ICCID;
@property (retain, nonatomic) NSString *EID;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
