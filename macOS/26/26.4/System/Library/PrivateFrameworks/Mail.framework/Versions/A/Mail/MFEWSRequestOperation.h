@class MFEWSGateway, MFEWSResponseOperation;

@interface MFEWSRequestOperation : MCMonitoredOperation {
    BOOL _isOffline;
}

@property (retain, nonatomic) MFEWSGateway *gateway;
@property (retain, nonatomic) MFEWSResponseOperation *responseOperation;
@property (readonly, nonatomic) BOOL isFolderRequest;
@property (readonly) BOOL isOffline;

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)executeOperation;
- (void)goOffline;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (void)setupOfflineResponse;

@end
