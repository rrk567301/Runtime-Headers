@class NSError, OSPRequest;

@interface OSPOperation : NSOperation

@property (retain) OSPRequest *request;
@property BOOL isFinished;
@property (retain) NSError *error;

- (void)start;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (void).cxx_destruct;

@end
