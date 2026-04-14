@class NSData;

@interface XProtectScan : NSObject <XprotectClientProtocol> {
    NSData *_fileData;
}

@property (nonatomic) BOOL requireInProcess;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)beginAnalysisWithFeedback:(id /* block */)a0;
- (BOOL)beginAnalysisWithResultsHandler:(id /* block */)a0 feedback:(id /* block */)a1;

@end
