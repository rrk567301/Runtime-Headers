@class NSString;
@protocol WBSCertificateWarningPageHandler;

@interface WBSWarningPageCommandHandler : NSObject <WKScriptMessageHandler>

@property (readonly, weak, nonatomic) id<WBSCertificateWarningPageHandler> warningPageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (id)initWithWarningPageHandler:(id)a0;

@end
