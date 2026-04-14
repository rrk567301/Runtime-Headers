@class NSMutableArray;

@interface BPSSubscriberList : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *tickets;
@property (nonatomic) long long nextTicket;

- (void).cxx_destruct;
- (long long)appendElement:(id)a0;
- (id)claimAll;
- (id)init;
- (void)removeTicket:(long long)a0;

@end
