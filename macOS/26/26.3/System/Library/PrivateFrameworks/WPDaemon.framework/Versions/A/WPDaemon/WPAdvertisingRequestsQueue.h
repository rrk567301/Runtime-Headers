@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (unsigned long long)count;
- (void)remove:(id)a0;
- (id)allRequests;
- (void)removeAll;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;
- (void)add:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeRequestsOfClientType:(unsigned char)a0;

@end
