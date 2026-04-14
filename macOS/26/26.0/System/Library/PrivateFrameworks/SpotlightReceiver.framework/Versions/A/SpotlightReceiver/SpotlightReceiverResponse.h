@class SpotlightReceiverDonation, NSError, NSMutableDictionary;

@interface SpotlightReceiverResponse : NSObject {
    NSMutableDictionary *_updates;
}

@property (readonly, nonatomic) SpotlightReceiverDonation *donation;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)enumerateUpdatesUsingBlock:(id /* block */)a0;
- (id)initWithDonation:(id)a0;
- (id)donation;
- (BOOL)setUpdate:(id)a0 forItem:(id)a1;

@end
