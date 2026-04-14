@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FARequestCoalescer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coalesceQueue;
@property (retain, nonatomic) NSMutableDictionary *inFlightRequests;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)performBlockForKey:(id)a0 force:(BOOL)a1 block:(id /* block */)a2;

@end
