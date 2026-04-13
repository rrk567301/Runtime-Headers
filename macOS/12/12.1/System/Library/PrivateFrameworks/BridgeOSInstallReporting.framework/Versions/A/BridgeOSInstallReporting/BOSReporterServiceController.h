@class NSXPCConnection;

@interface BOSReporterServiceController : NSObject

@property (retain) NSXPCConnection *serviceConnection;

- (id)init;
- (void).cxx_destruct;
- (id)_connectToService;
- (BOOL)startReportingLogsWithStartDate:(id)a0 sessionUUID:(id)a1;
- (BOOL)armReporterWithStartDate:(id)a0 sessionUUID:(id)a1;
- (id)_synchronousService;
- (BOOL)startReportingLogsFromNVRAMStateWithErrorCheck:(BOOL)a0;

@end
