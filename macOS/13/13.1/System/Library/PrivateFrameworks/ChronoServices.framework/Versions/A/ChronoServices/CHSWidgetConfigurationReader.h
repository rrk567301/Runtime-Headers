@class CHSChronoServicesConnection;

@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;
- (id)_transformResults:(id)a0;

@end
