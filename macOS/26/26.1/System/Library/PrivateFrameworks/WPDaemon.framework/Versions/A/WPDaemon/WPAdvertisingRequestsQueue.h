@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (void)add:(id)a0;
- (id)allRequests;
- (void)remove:(id)a0;
- (void)removeAll;
- (void)removeRequestsOfClientType:(unsigned char)a0;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;

@end
