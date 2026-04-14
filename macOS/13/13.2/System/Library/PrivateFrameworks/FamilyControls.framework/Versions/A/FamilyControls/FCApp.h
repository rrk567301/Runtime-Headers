@class NSMutableDictionary;

@interface FCApp : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)appWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
+ (id)appWithPath:(id)a0;
+ (id)appWithDictionary:(id)a0;
+ (void)setKeychainForCodesigning:(struct __SecKeychain { } *)a0;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (id)initWithPath:(id)a0 addingSubApps:(BOOL)a1 creatingSignature:(BOOL)a2 detached:(BOOL)a3;
- (id)_stringWithOSType:(unsigned int)a0;
- (id)plistRepresentation;
- (void)readBundleInfo;
- (id)subApps;
- (void)setSubApps:(id)a0;
- (id)detachedSignature;
- (void)setDetachedSignature:(id)a0;
- (id)appStoreRating;

@end
