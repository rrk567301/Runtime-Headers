@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (void)add:(id)a0;
- (void)removeAll;
- (void)remove:(id)a0;
- (unsigned long long)count;
- (id)allRequests;
- (id)init;
- (void)removeRequestsOfClientType:(unsigned char)a0;
- (void).cxx_destruct;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;

@end
