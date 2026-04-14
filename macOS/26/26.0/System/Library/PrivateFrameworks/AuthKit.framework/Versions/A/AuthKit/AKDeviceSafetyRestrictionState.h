@class NSString;

@interface AKDeviceSafetyRestrictionState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *machineId;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) long long reason;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceMID:(id)a0 serialNumber:(id)a1 restrictionReason:(long long)a2;
- (id)initWithResponse:(id)a0 error:(id *)a1;

@end
