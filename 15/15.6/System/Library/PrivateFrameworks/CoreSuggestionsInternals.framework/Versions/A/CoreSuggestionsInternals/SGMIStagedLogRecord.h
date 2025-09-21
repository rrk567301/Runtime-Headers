@class SGMIMetricsMailIntelligenceForMessage;

@interface SGMIStagedLogRecord : NSObject

@property (readonly) SGMIMetricsMailIntelligenceForMessage *log;
@property (readonly) char isLogged;

- (void).cxx_destruct;
- (id)initWithLog:(id)a0 isLogged:(char)a1;

@end
