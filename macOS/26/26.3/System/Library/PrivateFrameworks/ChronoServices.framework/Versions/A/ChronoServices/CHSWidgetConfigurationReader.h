@class CHSChronoServicesConnection;

@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)_transformResults:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;

@end
