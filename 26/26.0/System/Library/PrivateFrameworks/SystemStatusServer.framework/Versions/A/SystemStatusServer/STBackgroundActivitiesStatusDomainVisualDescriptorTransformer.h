@class STBackgroundActivityManager;

@interface STBackgroundActivitiesStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STBackgroundActivityManager *_backgroundActivityManager;
}

- (id)init;
- (id)transformedDataForData:(id)a0;
- (void).cxx_destruct;
- (id)initWithBackgroundActivityManager:(id)a0;

@end
