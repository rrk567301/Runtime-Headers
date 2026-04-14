@class STDataAccessStatusDomainPublisher, STMediaStatusDomainData, STDataAccessStatusDomainDataProvider, STLocationStatusDomainData;
@protocol STStatusDomainPublisherServerHandle;

@interface STDataAccessStatusDomainDataProviderTransformer : NSObject <STStatusDomainDataTransforming> {
    STDataAccessStatusDomainPublisher *_dataAccessPublisher;
    STLocationStatusDomainData *_locationData;
    STMediaStatusDomainData *_mediaData;
    STDataAccessStatusDomainDataProvider *_dataProvider;
    id<STStatusDomainPublisherServerHandle> _publisherServerHandle;
}

- (void).cxx_destruct;
- (id)transformedDataForData:(id)a0 domain:(unsigned long long)a1;
- (id)initWithDataProvider:(id)a0 publisherServerHandle:(id)a1;

@end
