@class MFEWSGateway, MFEWSResponseOperation;

@interface MFEWSRequestOperation : MCMonitoredOperation {
    char _isOffline;
}

@property (retain, nonatomic) MFEWSGateway *gateway;
@property (retain, nonatomic) MFEWSResponseOperation *responseOperation;
@property (readonly, nonatomic) char isFolderRequest;
@property (readonly) char isOffline;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)executeOperation;
- (void)goOffline;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (void)setupOfflineResponse;

@end
