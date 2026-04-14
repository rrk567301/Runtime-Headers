@class CHSControlService;

@interface CHSControlConfigurationReader : NSObject {
    CHSControlService *_connection;
}

- (id)_transformResults:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)allConfiguredControlsWithCompletion:(id /* block */)a0;

@end
