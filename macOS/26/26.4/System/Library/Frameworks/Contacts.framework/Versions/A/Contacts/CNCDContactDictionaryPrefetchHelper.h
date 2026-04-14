@class NSDictionary;

@interface CNCDContactDictionaryPrefetchHelper : NSObject {
    NSDictionary *_index;
}

+ (id)os_log;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)cachedContactForObjectID:(id)a0;
- (id)contactForObjectID:(id)a0;
- (id)fetchedContactForObjectID:(id)a0;
- (void)prefetchContactsAffectedByChanges:(id)a0;

@end
