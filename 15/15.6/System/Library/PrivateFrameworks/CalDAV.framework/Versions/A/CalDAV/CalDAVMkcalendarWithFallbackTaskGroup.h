@class NSSet, NSDictionary, NSURL;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSURL *_url;
    NSSet *_primaryElements;
}

@property (retain, nonatomic) NSSet *fallbackElements;
@property (nonatomic) char shouldSupportVEVENT;
@property (nonatomic) char shouldSupportVTODO;
@property (retain, nonatomic) NSDictionary *headersToOverride;
@property (retain, nonatomic) NSDictionary *responseHeaders;

- (void).cxx_destruct;
- (void)_mkcalendarAfterFailureCount:(unsigned long long)a0;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1 primaryPropertiesToSet:(id)a2 fallbackPropertiesToSet:(id)a3 atURL:(id)a4;
- (void)startTaskGroup;

@end
