@class CWFRequestParameters, NSUUID, NSDictionary, NSDate;

@interface CWFXPCRequest : CWFAsyncBlockOperation {
    id /* block */ _response;
}

@property (nonatomic) BOOL alreadyResponded;
@property (copy) id /* block */ forwardToCompletionBlock;
@property (copy) NSUUID *UUID;
@property long long type;
@property (copy) CWFRequestParameters *requestParameters;
@property (copy) NSDate *receivedAt;
@property (copy) NSDictionary *info;
@property (copy) id /* block */ response;
@property BOOL isSubrequest;

- (void)setCompletionBlock:(id /* block */)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
