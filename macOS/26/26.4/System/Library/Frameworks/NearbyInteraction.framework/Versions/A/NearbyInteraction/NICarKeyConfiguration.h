@class NSString, NSDictionary;

@interface NICarKeyConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *vehicleIdentifier;
@property unsigned short protocolVersion;
@property (copy) NSDictionary *debugOptions;

+ (id)_labTestModeConfigurationWithOptions:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)_vehicleSimConfigurationWithOptions:(id)a0;

- (BOOL)canUpdateToConfiguration:(id)a0;
- (id)descriptionInternal;
- (id)initWithVehicleIdentifier:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initVehicleSimConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initLabTestModeConfiguration:(id)a0;

@end
