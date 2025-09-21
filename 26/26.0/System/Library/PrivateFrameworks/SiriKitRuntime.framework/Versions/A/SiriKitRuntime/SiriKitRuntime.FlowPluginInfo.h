@class NSString;

@interface SiriKitRuntime.FlowPluginInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsOnDeviceNL;
    void /* unknown type, empty encoding */ isPersonalRequest;
    void /* unknown type, empty encoding */ sensitivityPolicy;
    void /* unknown type, empty encoding */ isEmergencyRequest;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
