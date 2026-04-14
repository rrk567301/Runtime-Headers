@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IADNSService : NSObject

@property (retain) NSString *serverAddress;
@property (retain) NSMutableDictionary *mailServers;
@property (readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property BOOL readResultsFromCache;
@property BOOL writeResultsToCache;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithServerAddress:(id)a0;
- (id)_sortedHostPairs;
- (BOOL)hasPrimaryMailHost:(id)a0;
- (void)beginQuerySync;

@end
