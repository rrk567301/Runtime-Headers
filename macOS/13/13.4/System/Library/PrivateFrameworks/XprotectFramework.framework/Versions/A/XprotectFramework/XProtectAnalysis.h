@class NSDictionary, NSURL, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface XProtectAnalysis : NSObject <XprotectClientProtocol> {
    NSDictionary *_lsProperties;
    id /* block */ _feedback;
    id /* block */ _results;
    NSXPCConnection *_xpc;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
}

@property BOOL malwareScanOnly;
@property (retain) NSURL *fileURL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)beginAnalysisWithDelegate:(id)a0 didEndSelector:(SEL)a1 contextInfo:(void *)a2;
- (BOOL)beginAnalysisWithDelegate:(id)a0 didEndSelector:(SEL)a1 contextInfo:(void *)a2 feedback:(id /* block */)a3;
- (BOOL)beginAnalysisWithHandler:(id /* block */)a0 contextInfo:(void *)a1;
- (BOOL)beginAnalysisWithHandler:(id /* block */)a0 contextInfo:(void *)a1 feedback:(id /* block */)a2;
- (void)didReceiveFeedbackOfType:(id)a0 withInformation:(id)a1;

@end
