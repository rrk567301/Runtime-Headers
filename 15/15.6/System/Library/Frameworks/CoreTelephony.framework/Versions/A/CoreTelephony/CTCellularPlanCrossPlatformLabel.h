@class NSString;

@interface CTCellularPlanCrossPlatformLabel : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *labelName;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhoneNumber:(id)a0 labelName:(id)a1;

@end
