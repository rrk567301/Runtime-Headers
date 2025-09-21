@interface DNDAccountFeatureSupport : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long cloudFeatures;
@property (readonly, nonatomic) char hasCloudDevices;
@property (readonly, nonatomic) unsigned long long pairedFeatures;
@property (readonly, nonatomic) char hasPairedDevices;

+ (id)accountFeaturesWithCloud:(unsigned long long)a0 hasCloudDevices:(char)a1 paired:(unsigned long long)a2 hasPairedDevices:(char)a3;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithCloud:(unsigned long long)a0 hasCloud:(char)a1 paired:(unsigned long long)a2 hasPaired:(char)a3;

@end
