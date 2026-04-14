@class NSImage, NSXPCConnection;

@interface DSDiagnosticsSessionAvailability : NSObject

@property (retain) NSXPCConnection *connection;
@property (readonly, nonatomic) long long enhancedLoggingStatus;
@property (readonly, nonatomic) NSImage *diagnosticsModeIcon;

+ (id)sharedInstance;
+ (id)logoutOptionsForAssistant:(BOOL)a0;

- (void).cxx_destruct;
- (void)_getSessionStatusWithTicketNumber:(id)a0 timeout:(id)a1 completionHandler:(id /* block */)a2;
- (void)_openEnhancedLoggingAppWithCompletionHandler:(id /* block */)a0;
- (void)_restartForAssistant:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_setDiagnosticsMode:(BOOL)a0 withParameters:(id)a1 forAssistant:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (void)_setUpXPCConnectionIfNeeded;
- (void)getSessionStatusWithCompletionHandler:(id /* block */)a0;
- (void)getSessionStatusWithTicketNumber:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSessionStatusWithTicketNumber:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)getSessionStatusWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
- (void)openApplicationForSessionStatus:(long long)a0 completionHandler:(id /* block */)a1;
- (void)restartToDiagnosticsModeForAssistantWithCompletionHandler:(id /* block */)a0;
- (void)restartToDiagnosticsModeForAssistantWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)restartToDiagnosticsModeWithCompletionHandler:(id /* block */)a0;

@end
