@class NSString, NSDictionary;

@interface NICarKeyConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *vehicleIdentifier;
@property unsigned short protocolVersion;
@property (copy) NSDictionary *debugOptions;

+ (BOOL)supportsSecureCoding;
+ (id)_vehicleSimConfigurationWithOptions:(id)a0;
+ (id)_labTestModeConfigurationWithOptions:(id)a0;

- (id)descriptionInternal;
- (id)initVehicleSimConfiguration:(id)a0;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (id)initLabTestModeConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canUpdateToConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVehicleIdentifier:(id)a0;

@end
