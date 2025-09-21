@class _PASLock, NSString;

@interface PPNamedEntityDissector : NSObject {
    int _linguisticDataNotificationToken;
    _PASLock *_lock;
    NSString *_userLanguage;
    char _userIsMultilingual;
    NSString *_meCardContactsIdentifier;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_resetGazetteer;
- (void)_collectAugmentedGazetteerWithText:(id)a0 addNamedEntity:(id /* block */)a1 addTopic:(id /* block */)a2 addLocation:(id /* block */)a3;
- (id)_collectDataDetectorsWithText:(id)a0 algorithms:(id)a1 isMessagesSource:(char)a2 addNamedEntity:(id /* block */)a3;
- (void)_harvestLocationFromEntity:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 enrichment:(id)a3 algorithm:(unsigned short)a4;
- (id)entitiesInPlainText:(id)a0 eligibleRegions:(id)a1 source:(id)a2 cloudSync:(char)a3;
- (id)entitiesInPlainText:(id)a0 eligibleRegions:(id)a1 source:(id)a2 cloudSync:(char)a3 algorithms:(id)a4;
- (id)initWithPurgeableGazetteer:(id)a0;

@end
