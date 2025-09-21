@class CNAvatarCache, NSHashTable;

@interface LPContactsBadgeViewAvatarCache : NSObject {
    NSHashTable *_clients;
    CNAvatarCache *_avatarCache;
}

+ (id)shared;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)avatarCache;

@end
