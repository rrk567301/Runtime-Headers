@class CCSetDonation;

@interface KVDatasetStream : NSObject

@property (readonly, nonatomic) CCSetDonation *donation;

- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)finish:(id /* block */)a0;
- (id)initWithDonation:(id)a0;
- (id)_cascadeItemFromItem:(id)a0 error:(id *)a1;

@end
