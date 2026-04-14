@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <CTXPCLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;
@property (retain, nonatomic) NSString *registrationDisplayStatus;
@property (nonatomic) BOOL isInHomeCountry;
@property (nonatomic) BOOL changedDueToSimRemoval;
@property (nonatomic) BOOL isRegistrationForcedHome;
@property (nonatomic) BOOL isSatelliteSystem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
