@protocol CHSChronoWidgetServiceServer;

@interface CHSWidgetConfigurationReader : NSObject {
    id<CHSChronoWidgetServiceServer> _server;
}

- (id)init;
- (void).cxx_destruct;
- (id)_transformResults:(id)a0;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;

@end
