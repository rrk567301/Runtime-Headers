@class NSMutableDictionary;

@interface ICQAppCloudStorageCache : NSObject {
    NSMutableDictionary *_hashMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setCloudStorage:(id)a0 byApp:(id)a1 forAltDSID:(id)a2;
- (id)cloudStorageByApp:(id)a0 forAltDSID:(id)a1;

@end
