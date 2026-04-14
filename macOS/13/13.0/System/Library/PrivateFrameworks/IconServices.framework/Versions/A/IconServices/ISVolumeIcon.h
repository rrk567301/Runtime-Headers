@class NSString;

@interface ISVolumeIcon : ISConcreteIcon

@property (readonly) NSString *kextBundleIdentifier;
@property (readonly) NSString *kextIconName;
@property (readonly) unsigned int typeCode;

+ (BOOL)supportsSecureCoding;
+ (id)concreteIconForVolumeURL:(id)a0;
+ (unsigned int)IOKitPort;
+ (id)concreteIconForDeviceIdentifier:(id)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)resourceURL;
- (id)resourceFileName;
- (id)symbol;
- (id)makeResourceProvider;
- (id)initWithKextBundleIdentifier:(id)a0 kextIconName:(id)a1 typeCode:(unsigned int)a2;

@end
