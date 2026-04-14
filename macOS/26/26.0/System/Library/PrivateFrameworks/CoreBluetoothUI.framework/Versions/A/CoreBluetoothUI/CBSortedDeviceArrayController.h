@class NSMapTable;

@interface CBSortedDeviceArrayController : NSArrayController

@property (retain) NSMapTable *peerManifest;

- (void)removeObject:(id)a0;
- (void)addObjects:(id)a0;
- (void)initialize;
- (void)addObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)arrangeObjects:(id)a0;
- (id)initWithContent:(id)a0;
- (id)findDeviceDictForPeer:(id)a0;

@end
