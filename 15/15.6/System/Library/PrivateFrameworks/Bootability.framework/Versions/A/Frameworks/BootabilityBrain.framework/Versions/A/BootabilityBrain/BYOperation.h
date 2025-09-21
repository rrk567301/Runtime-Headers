@class NSError, BYRequest;

@interface BYOperation : NSOperation

@property (retain) BYRequest *request;
@property char isFinished;
@property (retain) NSError *error;
@property (readonly) char required;

- (void).cxx_destruct;
- (void)start;
- (id)initWithRequest:(id)a0;
- (void)cleanUpAfterSuccess:(char)a0;

@end
