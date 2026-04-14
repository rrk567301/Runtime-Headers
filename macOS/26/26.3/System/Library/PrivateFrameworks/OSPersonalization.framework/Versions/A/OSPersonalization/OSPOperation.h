@class NSError, OSPRequest;

@interface OSPOperation : NSOperation

@property (retain) OSPRequest *request;
@property BOOL isFinished;
@property (retain) NSError *error;

- (void)cleanUp;
- (id)initWithRequest:(id)a0;
- (void)start;
- (void).cxx_destruct;

@end
