@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *matchingID;
@property (retain, nonatomic) NSString *OID;
@property (retain, nonatomic) NSString *confirmationCode;
@property (retain, nonatomic) NSString *ICCID;
@property (retain, nonatomic) NSString *EID;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
