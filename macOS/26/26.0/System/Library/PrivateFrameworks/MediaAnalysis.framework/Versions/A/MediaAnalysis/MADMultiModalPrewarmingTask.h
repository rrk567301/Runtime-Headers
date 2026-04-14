@class NSString, NSArray;

@interface MADMultiModalPrewarmingTask : VCPMABaseTask {
    NSArray *_requests;
}

@property (retain, nonatomic) NSString *signpostPayload;

- (BOOL)run:(id *)a0;
- (void).cxx_destruct;
- (BOOL)cachesResources;
- (id)initWithRequests:(id)a0 cancelBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
