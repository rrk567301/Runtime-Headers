@class NSXPCConnection;

@interface ATXSleepSuggestionClient : NSObject <ATXSleepSuggestionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
