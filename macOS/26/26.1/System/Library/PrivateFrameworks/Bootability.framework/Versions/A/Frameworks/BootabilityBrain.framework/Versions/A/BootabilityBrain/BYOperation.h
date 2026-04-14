@class NSError, BYRequest;

@interface BYOperation : NSOperation

@property (retain) BYRequest *request;
@property BOOL isFinished;
@property (retain) NSError *error;
@property (readonly) BOOL required;

- (void)start;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
