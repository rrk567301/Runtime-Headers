@class CCSetDonation;

@interface KVDatasetStream : NSObject

@property (readonly, nonatomic) CCSetDonation *donation;

- (void)cancel;
- (id)description;
- (id)init;
- (void)finish:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithDonation:(id)a0;
- (id)_cascadeItemFromItem:(id)a0 error:(id *)a1;

@end
