@class NSArray, NSString, NSUUID;
@protocol HMMRTCReportingFactory;

@interface HMMQueuingRTCBackendOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _operationState;
}

@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) char isRealtime;
@property (readonly, nonatomic) id<HMMRTCReportingFactory> rtcFactory;
@property (readonly, nonatomic) id /* block */ staleSessionBlock;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)changeOperationState:(long long)a0;
- (id)initWithMessages:(id)a0 serviceName:(id)a1 sessionUUID:(id)a2 isRealtime:(char)a3 rtcFactory:(id)a4 staleSessionBlock:(id /* block */)a5;

@end
