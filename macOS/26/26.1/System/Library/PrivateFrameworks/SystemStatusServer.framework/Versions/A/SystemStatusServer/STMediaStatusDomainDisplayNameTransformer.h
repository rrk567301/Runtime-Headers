@protocol STAttributedEntityBatchResolving;

@interface STMediaStatusDomainDisplayNameTransformer : NSObject <STStatusDomainDataTransforming> {
    id<STAttributedEntityBatchResolving> _entityResolver;
}

- (id)transformedDataForData:(id)a0 domain:(unsigned long long)a1;
- (id)initWithEntityResolver:(id)a0;
- (void).cxx_destruct;

@end
