@class NSString, NSUUID;

@interface HMDTimeBasedFlagNameAndHomeSpecifier : NSObject <HMDTimeBasedFlagSpecifying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *flagName;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifierWithFlagName:(id)a0 homeUUID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFlagName:(id)a0 homeUUID:(id)a1;

@end
