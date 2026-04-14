@class NSMutableDictionary;

@interface ICQAppCloudStorageCache : NSObject {
    NSMutableDictionary *_hashMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)cloudStorageByApp:(id)a0 forAltDSID:(id)a1;
- (void)setCloudStorage:(id)a0 byApp:(id)a1 forAltDSID:(id)a2;

@end
