@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIBaseTask : NSObject

@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (unsigned long long)requiredCapabilities:(id)a0;

@end
