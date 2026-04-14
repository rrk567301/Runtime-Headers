@class NSMutableDictionary;

@interface FCApp : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)appWithDictionary:(id)a0;
+ (id)appWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
+ (id)appWithPath:(id)a0;
+ (void)setKeychainForCodesigning:(struct __SecKeychain { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)path;
- (id)bundleID;
- (id)displayName;
- (void)setPath:(id)a0;
- (id)_dictionary;
- (void)setDisplayName:(id)a0;
- (void)setBundleID:(id)a0;
- (id)appID;
- (void)setAppID:(id)a0;
- (void)setSubApps:(id)a0;
- (void)setDetachedSignature:(id)a0;
- (id)initWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
- (id)subApps;
- (id)plistRepresentation;
- (id)_stringWithOSType:(unsigned int)a0;
- (void)readBundleInfo;
- (id)detachedSignature;
- (id)appStoreRating;

@end
