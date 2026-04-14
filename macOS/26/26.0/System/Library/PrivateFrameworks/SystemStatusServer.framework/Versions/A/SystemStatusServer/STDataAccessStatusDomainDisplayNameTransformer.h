@protocol STAttributedEntityBatchResolving;

@interface STDataAccessStatusDomainDisplayNameTransformer : NSObject <STStatusDomainDataTransforming> {
    id<STAttributedEntityBatchResolving> _entityResolver;
}

- (id)transformedDataForData:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntityResolver:(id)a0;

@end
