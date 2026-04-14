@class NSString, EDWebContentParser;

@interface ECWebContentObserver : NSObject <ECWebContentObserver>

@property (weak, nonatomic) EDWebContentParser *parser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)baseURL:(id)a0 didRequestRemoteContentURLs:(id)a1;
- (void)requestDataDetectionResultsWithBaseURL:(id)a0;
- (void)receiveDataDetectionResults:(id)a0;
- (void)logWebBundleMessage:(id)a0;
- (id)initWithParser:(id)a0;

@end
