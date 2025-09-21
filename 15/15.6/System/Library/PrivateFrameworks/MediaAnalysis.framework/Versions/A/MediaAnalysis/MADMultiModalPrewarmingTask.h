@class NSString, NSArray;

@interface MADMultiModalPrewarmingTask : VCPMABaseTask {
    NSArray *_requests;
}

@property (retain, nonatomic) NSString *signpostPayload;

- (void).cxx_destruct;
- (char)run:(id *)a0;
- (char)cachesResources;
- (id)initWithRequests:(id)a0 cancelBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
