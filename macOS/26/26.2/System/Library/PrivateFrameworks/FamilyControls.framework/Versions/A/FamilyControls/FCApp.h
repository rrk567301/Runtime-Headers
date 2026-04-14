@class NSMutableDictionary;

@interface FCApp : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)appWithDictionary:(id)a0;
+ (id)appWithPath:(id)a0;
+ (id)appWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
+ (void)setKeychainForCodesigning:(struct __SecKeychain { } *)a0;

- (id)appID;
- (long long)compare:(id)a0;
- (void)setAppID:(id)a0;
- (id)bundleID;
- (void)setPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setBundleID:(id)a0;
- (id)_dictionary;
- (id)description;
- (id)displayName;
- (id)path;
- (id)initWithDictionary:(id)a0;
- (id)plistRepresentation;
- (void)dealloc;
- (id)_stringWithOSType:(unsigned int)a0;
- (id)subApps;
- (id)appStoreRating;
- (id)detachedSignature;
- (id)initWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
- (void)readBundleInfo;
- (void)setDetachedSignature:(id)a0;
- (void)setSubApps:(id)a0;

@end
