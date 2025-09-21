@class MFEWSGateway, NSError;
@protocol MFEWSErrorHandler;

@interface MFEWSResponseOperation : MCMonitoredOperation

@property (retain, nonatomic) MFEWSGateway *gateway;
@property (retain, nonatomic) id<MFEWSErrorHandler> errorHandler;
@property (retain) NSError *lastError;
@property (retain) id response;
@property BOOL isOffline;

- (void)main;
- (void)failWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)handleResponseMessage:(id)a0;
- (void)executeOperation;
- (BOOL)handleResponseMessage:(id)a0 withObject:(id)a1;
- (void)handleResponseMessages;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
