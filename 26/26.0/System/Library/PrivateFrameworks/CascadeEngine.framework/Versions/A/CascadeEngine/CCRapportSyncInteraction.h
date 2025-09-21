@class CCRapportDevice, NSArray, NSMutableSet, NSError, NSObject, CCSet;
@protocol OS_dispatch_queue;

@interface CCRapportSyncInteraction : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _requestTimeout;
    id /* block */ _completion;
    unsigned long long _index;
}

@property (readonly, nonatomic) unsigned char reason;
@property (readonly, nonatomic) CCRapportDevice *device;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) unsigned char state;
@property (readonly, nonatomic) unsigned short options;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *setsToSync;
@property (retain, nonatomic) CCSet *repeatDiscoveryAfterSet;
@property (readonly, nonatomic) NSMutableSet *discoveredResources;

- (id)detailedDescription;
- (void)complete;
- (BOOL)isRunning;
- (id)description;
- (void)updateState:(unsigned char)a0;
- (void).cxx_destruct;
- (void)cancelRapportRequestTimeout;
- (id)initWithQueue:(id)a0 reason:(unsigned char)a1 device:(id)a2 index:(unsigned long long)a3 type:(unsigned char)a4 options:(unsigned short)a5 completion:(id /* block */)a6;
- (void)setTimeoutForRapportRequest:(id)a0;

@end
