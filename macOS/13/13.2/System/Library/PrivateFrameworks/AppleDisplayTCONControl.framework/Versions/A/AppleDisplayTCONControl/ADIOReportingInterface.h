@class NSString;

@interface ADIOReportingInterface : NSObject {
    NSString *_containerID;
}

- (void).cxx_destruct;
- (id)getOSVersion;
- (id)initWithContainerID:(id)a0;
- (id)getSerialNumber;
- (id)getDeviceInfo;
- (id)getTCONFWVersion;
- (id)getTCONRegs;
- (id)getTCONControlPreferences;
- (id)getDiagnosticData;
- (id)getDiagnosticDataV2;

@end
