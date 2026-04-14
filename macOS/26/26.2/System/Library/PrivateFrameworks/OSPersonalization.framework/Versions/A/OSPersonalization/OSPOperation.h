@class NSError, OSPRequest;

@interface OSPOperation : NSOperation

@property (retain) OSPRequest *request;
@property BOOL isFinished;
@property (retain) NSError *error;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)cleanUp;

@end
