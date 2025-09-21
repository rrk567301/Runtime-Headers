@class NSString, NSObject;
@protocol OS_os_log;

@interface CNAPITriageLogger : NSObject <CNAPITriageLogger>

@property (class, readonly) NSObject<OS_os_log> *os_log;

@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)threadEntryPoint;
+ (void)setThreadEntryPoint:(SEL)a0;

- (void)request:(id)a0 failedWithError:(id)a1;
- (void)request:(id)a0 encounteredError:(id)a1;
- (id)init;
- (void)willExecuteFetchRequest:(id)a0;
- (void)clientStoppedEnumerationForRequest:(id)a0;
- (void)request:(id)a0 containsContact:(id)a1;
- (void)request:(id)a0 spentTimeInClientCode:(double)a1;
- (void)didExecuteFetchRequest:(id)a0 duration:(double)a1;
- (void)request:(id)a0 willReturnAnchor:(id)a1;
- (void).cxx_destruct;
- (void)didReturnAllResultsForContactFetchRequest:(id)a0;

@end
