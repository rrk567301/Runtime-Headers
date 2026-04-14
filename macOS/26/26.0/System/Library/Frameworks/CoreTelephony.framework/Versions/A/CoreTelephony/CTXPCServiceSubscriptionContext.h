@class NSString, NSNumber, NSUUID;

@interface CTXPCServiceSubscriptionContext : NSObject <CTXPCLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *labelID;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSNumber *userDataPreferred;
@property (retain, nonatomic) NSNumber *userDefaultVoice;
@property (nonatomic) BOOL isSimPresent;
@property (nonatomic) BOOL isSimGood;
@property (nonatomic) BOOL isSimHidden;
@property (nonatomic) BOOL isSimDataOnly;
@property (readonly, nonatomic) long long slotID;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;

+ (id)contextWithSlot:(long long)a0;
+ (id)contextWithUUID:(id)a0;
+ (id)contextWithXPCContextInfo:(id)a0;
+ (id)contextWithServiceDescriptor:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSlot:(long long)a0;
- (id)initWithUUID:(id)a0 andSlot:(long long)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)context;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
