@class NSString;

@interface ADIOReportingInterface : NSObject {
    NSString *_containerID;
}

- (void).cxx_destruct;
- (id)initWithContainerID:(id)a0;
- (id)getOSVersion;
- (id)getDiagnosticDataV2;
- (id)getSerialNumber;
- (id)getDeviceInfo;
- (id)getTCONFWVersion;
- (id)getDiagnosticData;

@end
