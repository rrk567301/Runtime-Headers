@class WFMacHelper;

@interface WFFileArbiter : NSObject

@property (retain, nonatomic) WFMacHelper *helper;

- (void).cxx_destruct;
- (void)extendDocumentURLs:(id)a0 workflowID:(id)a1 completion:(id /* block */)a2;
- (void)extendDocumentURL:(id)a0 workflowID:(id)a1 completion:(id /* block */)a2;

@end
