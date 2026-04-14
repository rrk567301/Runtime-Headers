@class NSMutableDictionary, NSMutableArray;

@interface ACLoggingHashCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSMutableDictionary *_cacheDictionary;
    NSMutableArray *_oldestKeys;
    unsigned long long _maxCapacity;
}

+ (id)sharedCache;

- (id)hashedString:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaxCapacity:(unsigned long long)a0;

@end
