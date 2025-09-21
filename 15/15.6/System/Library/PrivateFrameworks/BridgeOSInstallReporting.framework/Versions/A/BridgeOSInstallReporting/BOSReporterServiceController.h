@class NSXPCConnection;

@interface BOSReporterServiceController : NSObject

@property (retain) NSXPCConnection *serviceConnection;

- (id)init;
- (void).cxx_destruct;
- (id)_connectToService;
- (char)armReporterWithStartDate:(id)a0 sessionUUID:(id)a1;
- (char)startReportingLogsWithStartDate:(id)a0 sessionUUID:(id)a1;
- (id)_synchronousService;
- (char)startReportingLogsFromNVRAMStateWithErrorCheck:(char)a0;

@end
