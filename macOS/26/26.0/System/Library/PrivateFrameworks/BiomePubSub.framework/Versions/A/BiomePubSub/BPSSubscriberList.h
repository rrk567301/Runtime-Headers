@class NSMutableArray;

@interface BPSSubscriberList : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *tickets;
@property (nonatomic) long long nextTicket;

- (long long)appendElement:(id)a0;
- (id)init;
- (void)removeTicket:(long long)a0;
- (id)claimAll;
- (void).cxx_destruct;

@end
