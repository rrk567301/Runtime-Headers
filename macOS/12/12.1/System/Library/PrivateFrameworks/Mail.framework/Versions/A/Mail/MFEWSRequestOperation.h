@class MFEWSGateway, MFEWSResponseOperation;

@interface MFEWSRequestOperation : MCMonitoredOperation {
    BOOL _isOffline;
}

@property (retain, nonatomic) MFEWSGateway *gateway;
@property (retain, nonatomic) MFEWSResponseOperation *responseOperation;
@property (readonly, nonatomic) BOOL isFolderRequest;
@property (readonly) BOOL isOffline;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)goOffline;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (void)setupOfflineResponse;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (void)executeOperation;

@end
