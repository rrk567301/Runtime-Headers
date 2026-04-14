@class CCSetDonation;

@interface KVDatasetStream : NSObject

@property (readonly, nonatomic) CCSetDonation *donation;

- (void)finish:(id /* block */)a0;
- (void)cancel;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDonation:(id)a0;
- (id)_cascadeItemFromItem:(id)a0 error:(id *)a1;

@end
