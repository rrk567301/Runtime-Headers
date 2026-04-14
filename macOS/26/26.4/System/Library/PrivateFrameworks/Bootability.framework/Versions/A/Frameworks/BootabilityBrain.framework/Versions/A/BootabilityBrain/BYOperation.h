@class NSError, BYRequest;

@interface BYOperation : NSOperation

@property (retain) BYRequest *request;
@property BOOL isFinished;
@property (retain) NSError *error;
@property (readonly) BOOL required;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
