@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation

@property (getter=_status, setter=_setStatus:) long long status;
@property (readonly, nonatomic) WBSSiteMetadataRequest *request;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (BOOL)isFinished;
- (BOOL)isExecuting;
- (id)initWithRequest:(id)a0;
- (void)start;
- (id)init;
- (void).cxx_destruct;

@end
