@class NSXPCConnection;

@interface BOSReporterServiceController : NSObject

@property (retain) NSXPCConnection *serviceConnection;

- (id)_connectToService;
- (void).cxx_destruct;
- (id)init;
- (BOOL)armReporterWithStartDate:(id)a0 sessionUUID:(id)a1;
- (BOOL)startReportingLogsWithStartDate:(id)a0 sessionUUID:(id)a1;
- (id)_synchronousService;
- (BOOL)startReportingLogsFromNVRAMStateWithErrorCheck:(BOOL)a0;

@end
