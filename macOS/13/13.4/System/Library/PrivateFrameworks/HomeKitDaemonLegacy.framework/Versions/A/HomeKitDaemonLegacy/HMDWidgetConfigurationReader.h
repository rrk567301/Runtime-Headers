@protocol HMDWidgetConfigurationReaderInterface;

@interface HMDWidgetConfigurationReader : NSObject

@property (readonly) id<HMDWidgetConfigurationReaderInterface> interface;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (long long)homeWidgetsEnabledCount;

@end
