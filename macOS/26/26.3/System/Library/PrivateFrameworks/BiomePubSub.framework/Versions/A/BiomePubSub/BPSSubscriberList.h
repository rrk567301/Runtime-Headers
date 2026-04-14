@class NSMutableArray;

@interface BPSSubscriberList : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *tickets;
@property (nonatomic) long long nextTicket;

- (id)init;
- (void)removeTicket:(long long)a0;
- (void).cxx_destruct;
- (long long)appendElement:(id)a0;
- (id)claimAll;

@end
