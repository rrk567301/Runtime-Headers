@class NSMutableDictionary;

@interface _FPMetadata : NSDictionary {
    struct TUnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fLock; } _lock;
    NSMutableDictionary *_dict;
    BOOL _upgradedLanguages;
}

@property (readonly, nonatomic) BOOL _hasUpgradedLanguages;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)keyEnumerator;
- (id).cxx_construct;
- (void)_upgradeLanguagesIfNecessary;
- (id)initWithMutableDictionary:(id)a0;

@end
