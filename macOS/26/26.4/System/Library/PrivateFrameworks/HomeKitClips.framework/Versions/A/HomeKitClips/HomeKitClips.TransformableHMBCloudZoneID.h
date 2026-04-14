@interface HomeKitClips.TransformableHMBCloudZoneID : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ containerID;
    void /* unknown type, empty encoding */ scope;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ modelID;
    void /* unknown type, empty encoding */ zoneID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
