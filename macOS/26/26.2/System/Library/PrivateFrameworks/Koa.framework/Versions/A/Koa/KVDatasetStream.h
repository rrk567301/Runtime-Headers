@class CCSetDonation;

@interface KVDatasetStream : NSObject

@property (readonly, nonatomic) CCSetDonation *donation;

- (void)cancel;
- (void)finish:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDonation:(id)a0;
- (id)_cascadeItemFromItem:(id)a0 error:(id *)a1;

@end
