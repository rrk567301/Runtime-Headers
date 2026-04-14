@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIBaseTask : NSObject

@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;

- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)description;
- (unsigned long long)requiredCapabilities;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
