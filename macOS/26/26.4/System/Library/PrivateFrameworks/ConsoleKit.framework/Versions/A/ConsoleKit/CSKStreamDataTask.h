@class CSKStreamData;

@interface CSKStreamDataTask : CSKStreamTask

@property (readonly, weak, nonatomic) CSKStreamData *data;
@property (readonly, nonatomic) unsigned long long batchItemsLimit;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)name;
+ (id)batchesWithEntities:(id)a0 limit:(unsigned long long)a1;

- (id /* block */)handler;
- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)a0 batchItemsLimit:(unsigned long long)a1;
- (id)retrieveEntitiesFromData;

@end
