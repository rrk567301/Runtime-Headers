@class NSString;

@interface CKDTrafficLogger : NSObject

@property (nonatomic) long long sequenceNumber;
@property (retain, nonatomic) NSString *requestID;

- (void).cxx_destruct;
- (id)initWithRequestID:(id)a0;
- (BOOL)shouldLog;
- (void)logResponseConfiguration:(unsigned long long)a0 withMessageClassString:(id)a1;
- (void)logPartialRequestObjectData:(id)a0;
- (void)logRequest:(id)a0 toURL:(id)a1 withMethod:(id)a2 withMessageClassString:(id)a3 parsingStandaloneMessage:(BOOL)a4;
- (void)finishRequestLog;
- (void)logResponse:(id)a0;
- (void)logPartialResponseObjectData:(id)a0;
- (void)logRequestBodyStreamReset;
- (void)_logObject:(id)a0 ofType:(unsigned long long)a1;

@end
