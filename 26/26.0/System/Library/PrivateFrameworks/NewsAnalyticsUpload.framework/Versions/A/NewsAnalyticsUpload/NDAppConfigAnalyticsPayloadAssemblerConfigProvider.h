@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (id)initWithAppConfigurationManager:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
