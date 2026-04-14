@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IASAnalyticsServer : IAXPCProtocolObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *sessionManagerClasses;
@property (retain, nonatomic) NSMutableArray *sessionManagers;

- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)reportStatus;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;
- (void)periodic24HourEvents;

@end
