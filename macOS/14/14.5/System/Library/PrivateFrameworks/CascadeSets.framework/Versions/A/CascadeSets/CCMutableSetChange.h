@class NSMutableOrderedSet, NSMutableDictionary, CCSharedItem;

@interface CCMutableSetChange : NSObject <NSCopying>

@property (readonly, nonatomic) CCSharedItem *sharedItem;
@property (nonatomic) unsigned short sharedItemChangeType;
@property (readonly, nonatomic) NSMutableOrderedSet *allDevices;
@property (readonly, nonatomic) NSMutableOrderedSet *addedDevices;
@property (readonly, nonatomic) NSMutableOrderedSet *removedDevices;
@property (readonly, nonatomic) NSMutableOrderedSet *allLocalInstances;
@property (readonly, nonatomic) NSMutableOrderedSet *addedLocalInstances;
@property (readonly, nonatomic) NSMutableOrderedSet *removedLocalInstances;
@property (readonly, nonatomic) NSMutableDictionary *addedContentClockValues;
@property (readonly, nonatomic) NSMutableDictionary *removedContentClockValues;
@property (readonly, nonatomic) NSMutableDictionary *addedMetaContentClockValues;
@property (readonly, nonatomic) NSMutableDictionary *removedMetaContentClockValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)containsChanges;
- (void)addAddedContentClockValue:(unsigned long long)a0 forSiteIdentifier:(id)a1;
- (void)addAddedMetaContentClockValue:(unsigned long long)a0 forSiteIdentifier:(id)a1;
- (void)addRemovedContentClockValue:(unsigned long long)a0 forSiteIdentifier:(id)a1;
- (void)addRemovedMetaContentClockValue:(unsigned long long)a0 forSiteIdentifier:(id)a1;
- (BOOL)containsContentHash:(id)a0;
- (void)enumerateContentClockValuesUsingBlock:(id /* block */)a0;
- (void)enumerateMetaContentClockValuesUsingBlock:(id /* block */)a0;
- (id)initWithSharedItem:(id)a0 changeType:(unsigned short)a1;

@end
