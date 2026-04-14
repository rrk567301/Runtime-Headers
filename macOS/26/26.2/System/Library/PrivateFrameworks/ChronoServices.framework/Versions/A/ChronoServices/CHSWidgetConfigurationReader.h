@class CHSChronoServicesConnection;

@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (void).cxx_destruct;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;
- (id)init;
- (id)_transformResults:(id)a0;

@end
