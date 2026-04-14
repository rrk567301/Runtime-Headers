@class NSString;

@interface ADIOReportingInterface : NSObject {
    NSString *_containerID;
}

- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)getDeviceInfo;
- (id)getSerialNumber;
- (id)getDiagnosticData;
- (id)getDiagnosticDataV2;
- (id)getOSVersion;
- (id)getTCONControlPreferences;
- (id)getTCONFWVersion;
- (id)getTCONRegs;

@end
