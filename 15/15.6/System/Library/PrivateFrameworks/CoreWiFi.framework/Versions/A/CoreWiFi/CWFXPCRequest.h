@class CWFRequestParameters, NSUUID, NSDictionary, NSDate;

@interface CWFXPCRequest : NSBlockOperation

@property char waitingToSendResponseBeforeFinish;
@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long type;
@property (copy, nonatomic) CWFRequestParameters *requestParameters;
@property (copy, nonatomic) NSDate *receivedAt;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) id /* block */ response;
@property (nonatomic) char isSubrequest;

+ (char)_removesDependenciesAfterFinish;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (char)isExecuting;
- (char)isFinished;

@end
