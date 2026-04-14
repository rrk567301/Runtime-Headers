@class CNAvatarCache, NSHashTable;

@interface LPContactsBadgeViewAvatarCache : NSObject {
    NSHashTable *_clients;
    CNAvatarCache *_avatarCache;
}

+ (id)shared;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)avatarCache;

@end
