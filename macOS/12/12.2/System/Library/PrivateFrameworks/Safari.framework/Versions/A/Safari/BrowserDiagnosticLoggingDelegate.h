@class NSString;

@interface BrowserDiagnosticLoggingDelegate : NSObject <_WKDiagnosticLoggingDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_webView:(id)a0 logDiagnosticMessage:(id)a1 description:(id)a2;
- (void)_webView:(id)a0 logDiagnosticMessageWithResult:(id)a1 description:(id)a2 result:(long long)a3;
- (void)_webView:(id)a0 logDiagnosticMessageWithValue:(id)a1 description:(id)a2 value:(id)a3;
- (void)_webView:(id)a0 logDiagnosticMessageWithEnhancedPrivacy:(id)a1 description:(id)a2;
- (void)_webView:(id)a0 logDiagnosticMessage:(id)a1 description:(id)a2 valueDictionary:(id)a3;

@end
