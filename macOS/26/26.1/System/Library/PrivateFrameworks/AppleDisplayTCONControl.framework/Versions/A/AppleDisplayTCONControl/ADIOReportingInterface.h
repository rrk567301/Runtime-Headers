@class NSString;

@interface ADIOReportingInterface : NSObject {
    NSString *_containerID;
}

- (id)getDeviceInfo;
- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (id)getOSVersion;
- (id)getSerialNumber;
- (id)getDiagnosticData;
- (id)getDiagnosticDataV2;
- (id)getTCONControlPreferences;
- (id)getTCONFWVersion;
- (id)getTCONRegs;

@end
