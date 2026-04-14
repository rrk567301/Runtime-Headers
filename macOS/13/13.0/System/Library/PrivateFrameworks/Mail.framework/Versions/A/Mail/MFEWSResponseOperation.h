@class MFEWSGateway, NSError;
@protocol MFEWSErrorHandler;

@interface MFEWSResponseOperation : MCMonitoredOperation

@property (retain, nonatomic) MFEWSGateway *gateway;
@property (retain, nonatomic) id<MFEWSErrorHandler> errorHandler;
@property (retain) NSError *lastError;
@property (retain) id response;
@property BOOL isOffline;

- (id)description;
- (id)init;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (BOOL)handleResponseMessage:(id)a0;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;
- (void)executeOperation;
- (void)handleResponseMessages;
- (BOOL)handleResponseMessage:(id)a0 withObject:(id)a1;

@end
