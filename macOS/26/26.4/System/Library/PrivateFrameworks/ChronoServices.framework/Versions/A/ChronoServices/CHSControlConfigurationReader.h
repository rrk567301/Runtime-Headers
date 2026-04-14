@class CHSControlService;

@interface CHSControlConfigurationReader : NSObject {
    CHSControlService *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (id)_transformResults:(id)a0;
- (void)allConfiguredControlsWithCompletion:(id /* block */)a0;

@end
