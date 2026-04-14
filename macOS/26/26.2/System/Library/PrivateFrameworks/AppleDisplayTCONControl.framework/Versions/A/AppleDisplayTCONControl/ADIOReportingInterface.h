@class NSString;

@interface ADIOReportingInterface : NSObject {
    NSString *_containerID;
}

- (id)getDeviceInfo;
- (id)initWithContainerID:(id)a0;
- (void).cxx_destruct;
- (id)getOSVersion;
- (id)getSerialNumber;
- (id)getDiagnosticData;
- (id)getDiagnosticDataV2;
- (id)getTCONControlPreferences;
- (id)getTCONFWVersion;
- (id)getTCONRegs;

@end
