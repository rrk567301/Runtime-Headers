@class NSString;

@interface CTCellularPlanTransferCrossPlatformRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSString *mccMnc;
@property (readonly, nonatomic) NSString *gid1;
@property (readonly, nonatomic) NSString *gid2;
@property (readonly, nonatomic) NSString *carrierID;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhoneNumber:(id)a0 carrierName:(id)a1 mccMnc:(id)a2 gid1:(id)a3 gid2:(id)a4;
- (id)initWithPhoneNumber:(id)a0 carrierName:(id)a1 mccMnc:(id)a2 gid1:(id)a3 gid2:(id)a4 carrierID:(id)a5;

@end
