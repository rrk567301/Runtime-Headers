@class NSXPCConnection;

@interface ATXSleepSuggestionClient : NSObject <ATXSleepSuggestionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)init;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)a0;

@end
