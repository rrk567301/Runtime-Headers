@class CHSControlService;

@interface CHSControlConfigurationReader : NSObject {
    CHSControlService *_connection;
}

- (id)_transformResults:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)allConfiguredControlsWithCompletion:(id /* block */)a0;

@end
