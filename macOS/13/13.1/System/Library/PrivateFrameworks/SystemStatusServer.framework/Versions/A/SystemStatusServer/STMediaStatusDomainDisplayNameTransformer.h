@protocol STAttributedEntityBatchResolving;

@interface STMediaStatusDomainDisplayNameTransformer : NSObject <STStatusDomainDataTransforming> {
    id<STAttributedEntityBatchResolving> _entityResolver;
}

- (void).cxx_destruct;
- (id)transformedDataForData:(id)a0;
- (id)initWithEntityResolver:(id)a0;

@end
