@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)remove:(id)a0;
- (void)add:(id)a0;
- (void)removeAll;
- (void)removeRequestsOfClientType:(unsigned char)a0;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;
- (id)allRequests;

@end
