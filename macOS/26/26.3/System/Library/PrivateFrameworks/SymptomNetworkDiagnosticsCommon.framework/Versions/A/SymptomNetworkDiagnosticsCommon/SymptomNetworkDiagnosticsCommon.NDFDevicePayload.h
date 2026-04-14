@interface SymptomNetworkDiagnosticsCommon.NDFDevicePayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ deviceID;
    void /* unknown type, empty encoding */ deviceRole;
    void /* unknown type, empty encoding */ deviceModel;
    void /* unknown type, empty encoding */ designatedDeviceReachability;
    void /* unknown type, empty encoding */ homeKitGroupID;
    void /* unknown type, empty encoding */ netSigV4;
    void /* unknown type, empty encoding */ netSigV6;
    void /* unknown type, empty encoding */ obscuredSSID;
    void /* unknown type, empty encoding */ natCount;
    void /* unknown type, empty encoding */ networkProperties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
