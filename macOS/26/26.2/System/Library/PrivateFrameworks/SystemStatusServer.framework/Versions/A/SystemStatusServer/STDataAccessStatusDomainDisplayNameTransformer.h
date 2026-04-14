@protocol STAttributedEntityBatchResolving;

@interface STDataAccessStatusDomainDisplayNameTransformer : NSObject <STStatusDomainDataTransforming> {
    id<STAttributedEntityBatchResolving> _entityResolver;
}

- (id)initWithEntityResolver:(id)a0;
- (void).cxx_destruct;
- (id)transformedDataForData:(id)a0 domain:(unsigned long long)a1;

@end
