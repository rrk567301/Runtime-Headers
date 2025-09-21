@class SKDItemProcessor;

@interface SKDBaseCSItemProcessingJob : SKDBaseItemProcessingJob {
    SKDItemProcessor *_processor;
}

@property (readonly, nonatomic) SKDItemProcessor *itemProcessor;

- (void).cxx_destruct;
- (id)attributeSetForItemUpdate:(id)a0;
- (id)itemRecordForUniqueID:(id)a0 bundleID:(id)a1 attributeProviderBlock:(id /* block */)a2;
- (id)processCSItemRecord:(id)a0;
- (void)setItemProcessor:(id)a0;

@end
