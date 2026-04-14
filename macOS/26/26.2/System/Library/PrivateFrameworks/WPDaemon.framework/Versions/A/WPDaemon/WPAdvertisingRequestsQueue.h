@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (void)remove:(id)a0;
- (void)removeAll;
- (unsigned long long)count;
- (void)add:(id)a0;
- (void).cxx_destruct;
- (void)removeRequestsOfClientType:(unsigned char)a0;
- (id)allRequests;
- (id)init;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;

@end
