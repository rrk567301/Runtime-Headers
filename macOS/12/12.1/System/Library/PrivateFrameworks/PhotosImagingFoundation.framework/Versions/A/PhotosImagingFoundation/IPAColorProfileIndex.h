@class NSOrderedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IPAColorProfileIndex : NSObject {
    NSObject<OS_dispatch_queue> *_serializer;
    NSOrderedSet *_installedProfiles;
    NSMutableDictionary *_identifierToProfileMap;
    NSMutableDictionary *_checksumToProfileMap;
    NSMutableDictionary *_identifierToProfileRuntimeCache;
    NSMutableDictionary *_checksumToProfileRuntimeCache;
}

@property (readonly, nonatomic) unsigned int cacheSeed;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)takeNewContent:(id)a0 cacheSeed:(unsigned int)a1;
- (id)installedProfiles;
- (id)profileWithIdentifier:(id)a0;
- (id)profileWithChecksum:(id)a0;
- (void)cacheProfile:(id)a0;
- (id)profilesForColorSpaceType:(struct __CFString { } *)a0;
- (id)profilesForProfileClass:(struct __CFString { } *)a0;

@end
