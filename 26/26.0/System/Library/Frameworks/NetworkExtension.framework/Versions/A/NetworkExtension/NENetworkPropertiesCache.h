@class NSString, NSURL, NSDictionary;

@interface NENetworkPropertiesCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    int _notifyToken;
    NSDictionary *_cache;
}

@property (class, readonly) NENetworkPropertiesCache *sharedCache;

@property (retain, nonatomic) NSURL *cacheFileURL;
@property (retain, nonatomic) NSString *keychainIdentifier;
@property (nonatomic) unsigned long long cacheMaxSizeBytes;

- (void)clear;
- (void)setProperties:(id)a0 forNetworkPath:(id)a1;
- (id)init;
- (id)copyPropertiesForNetworkPath:(id)a0;
- (void)rotateEncryptionKey;
- (void).cxx_destruct;

@end
