@class NSMutableSet, CCSharedItem, NSNumber, NSMutableArray;

@interface CCMutableSetChange : NSObject {
    NSNumber *_sharedIdentifier;
    NSMutableSet *_removedDevices;
    NSMutableArray *_addedDevices;
    NSMutableArray *_presentNonAddedDevices;
    NSMutableSet *_removedInstances;
    NSMutableArray *_addedInstances;
    NSMutableArray *_presentNonAddedInstances;
}

@property (readonly, nonatomic) CCSharedItem *sharedItem;

- (void).cxx_destruct;
- (BOOL)hasContentHash:(id)a0;
- (void)_deduplicateRemovedObjects:(id)a0 withAdded:(id)a1 presentNonAdded:(id)a2 outAll:(id *)a3 outAdded:(id *)a4 outRemoved:(id *)a5;
- (void)appendAddedDevice:(id)a0;
- (void)appendAddedLocalInstance:(id)a0;
- (void)appendPresentNonAddedDevice:(id)a0;
- (void)appendPresentNonAddedLocalInstance:(id)a0;
- (void)appendRemovedDevice:(id)a0;
- (void)appendRemovedLocalInstance:(id)a0;
- (id)finalizeSetChange;
- (id)initWithSharedIdentifier:(id)a0;
- (void)setSharedItem:(id)a0;

@end
