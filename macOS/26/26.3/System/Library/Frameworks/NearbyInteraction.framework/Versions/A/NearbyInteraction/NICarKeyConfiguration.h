@class NSString, NSDictionary;

@interface NICarKeyConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *vehicleIdentifier;
@property unsigned short protocolVersion;
@property (copy) NSDictionary *debugOptions;

+ (BOOL)supportsSecureCoding;
+ (id)_labTestModeConfigurationWithOptions:(id)a0;
+ (id)_vehicleSimConfigurationWithOptions:(id)a0;

- (BOOL)canUpdateToConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)initLabTestModeConfiguration:(id)a0;
- (id)initVehicleSimConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithVehicleIdentifier:(id)a0;

@end
