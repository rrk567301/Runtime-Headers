@class NSString;

@interface ADIOReportingInterface : NSObject {
    NSString *_containerID;
}

- (id)initWithContainerID:(id)a0;
- (id)getDeviceInfo;
- (void).cxx_destruct;
- (id)getOSVersion;
- (id)getSerialNumber;
- (id)getDiagnosticData;
- (id)getDiagnosticDataV2;
- (id)getTCONControlPreferences;
- (id)getTCONFWVersion;
- (id)getTCONRegs;

@end
