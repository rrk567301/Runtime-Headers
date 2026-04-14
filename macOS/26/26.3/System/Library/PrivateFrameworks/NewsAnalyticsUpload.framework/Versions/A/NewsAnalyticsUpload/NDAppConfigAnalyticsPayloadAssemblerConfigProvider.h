@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (id)initWithAppConfigurationManager:(id)a0;
- (id)init;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
