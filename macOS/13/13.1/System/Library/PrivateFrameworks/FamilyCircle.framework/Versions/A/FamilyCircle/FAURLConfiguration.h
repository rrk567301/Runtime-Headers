@interface FAURLConfiguration : NSObject <FAURLProvider>

- (void)URLForEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (id)URLForEndpoint:(id)a0;
- (void)fetchAAURLConfigurationWithCompletion:(id /* block */)a0;

@end
