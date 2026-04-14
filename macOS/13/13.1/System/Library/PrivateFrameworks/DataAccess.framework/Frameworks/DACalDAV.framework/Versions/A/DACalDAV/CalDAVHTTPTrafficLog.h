@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject

@property (retain, nonatomic) DACoreDAVLogger *curLogger;

+ (id)instance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)enabled;
- (void)logData:(id)a0;
- (void)logString:(id)a0;
- (void)finishSnippets;
- (void)logStringWithFormat:(id)a0;

@end
