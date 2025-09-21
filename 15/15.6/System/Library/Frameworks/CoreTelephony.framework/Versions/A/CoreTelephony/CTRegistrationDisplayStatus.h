@class NSString;

@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *registrationDisplayStatus;
@property (nonatomic) char isInHomeCountry;
@property (nonatomic) char changedDueToSimRemoval;
@property (nonatomic) char isRegistrationForcedHome;
@property (nonatomic) char isSatelliteSystem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
