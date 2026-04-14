@class NSString, CSSearchableIndex, CSDataWrapper, NSData, NSObject;
@protocol OS_xpc_object;

@interface CSSearchableIndexRequest : NSObject {
    unsigned int _cost;
    unsigned int _requestID;
}

@property (retain, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CSDataWrapper *dataWrapper;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcValue;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL throttled;
@property (nonatomic) BOOL critical;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) BOOL shouldThrottle;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned int cost;
@property (readonly, nonatomic) unsigned int requestID;
@property (copy, nonatomic) id /* block */ performBlock;
@property (copy, nonatomic) id /* block */ completionDataBlock;
@property (copy, nonatomic) id /* block */ completionXPCValueBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (void)initialize;

- (void)_finishWithError:(id)a0;
- (void)finishWithError:(id)a0;
- (void)retryIfNecessaryWithError:(id)a0 dataWrapper:(id)a1 xpcValue:(id)a2;
- (id)initWithSearchableIndex:(id)a0 label:(id)a1;
- (void)retryIfNecessaryWithError:(id)a0;
- (void)_unthrottleIfNecessary;
- (id)initWithSearchableIndex:(id)a0 label:(id)a1 critical:(BOOL)a2 cost:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)_perform;
- (void)_throttleIfNecessary;
- (void)retryIfNecessaryWithError:(id)a0 dataWrapper:(id)a1;
- (id)initWithSearchableIndex:(id)a0 label:(id)a1 critical:(BOOL)a2;
- (void)start;
- (id)description;
- (void)dealloc;

@end
