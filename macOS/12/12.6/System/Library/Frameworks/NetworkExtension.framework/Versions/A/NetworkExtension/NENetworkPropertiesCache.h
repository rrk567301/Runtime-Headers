@class NSString, NSDictionary, NSURL;

@interface NENetworkPropertiesCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (class, readonly) NENetworkPropertiesCache *sharedCache;

@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSDictionary *cache;
@property (retain, nonatomic) NSURL *cacheFileURL;
@property (retain, nonatomic) NSString *keychainIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)generateNewKey;
- (BOOL)saveKey:(id)a0 itemExists:(BOOL)a1;
- (id)encryptData:(id)a0 withKey:(id)a1;
- (void)saveCacheToDisk:(id)a0;
- (int)fetchKey:(id *)a0;
- (void)updateKeyWithCurrentKey:(id)a0 currentCache:(id)a1;
- (id)copyNetworkSignatureForPath:(id)a0;
- (BOOL)loadCache;
- (id)createCacheKeyFromSignature:(id)a0;
- (id)copyPropertiesForNetworkPath:(id)a0;
- (void)setProperties:(id)a0 forNetworkPath:(id)a1;
- (void)rotateEncryptionKey;

@end
