@class CHSChronoServicesConnection;

@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;
- (id)_transformResults:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
