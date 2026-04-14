@class NSString;

@interface CTSimHardwareInfo : NSObject <CTXPCLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long hardwareType;
@property (nonatomic) long long simLocation;
@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithHardwareInfo:(long long)a0 simLocation:(long long)a1;

@end
