@class NSMutableSet, CCSharedItem;

@interface CCMutableSetChange : NSObject <NSCopying>

@property (readonly, nonatomic) CCSharedItem *sharedItem;
@property (nonatomic) unsigned short sharedItemChangeType;
@property (readonly, nonatomic) NSMutableSet *allDevices;
@property (readonly, nonatomic) NSMutableSet *addedDevices;
@property (readonly, nonatomic) NSMutableSet *removedDevices;
@property (readonly, nonatomic) NSMutableSet *allLocalInstances;
@property (readonly, nonatomic) NSMutableSet *addedLocalInstances;
@property (readonly, nonatomic) NSMutableSet *removedLocalInstances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)appendAddedDevices:(id)a0;
- (void)appendAddedLocalInstances:(id)a0;
- (void)appendAllDevices:(id)a0;
- (void)appendAllLocalInstances:(id)a0;
- (void)appendRemovedDevices:(id)a0;
- (void)appendRemovedLocalInstances:(id)a0;
- (BOOL)containsChangesAfterDeduplication;
- (BOOL)containsContentHash:(id)a0;
- (id)initWithSharedItem:(id)a0 changeType:(unsigned short)a1;

@end
