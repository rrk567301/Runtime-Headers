@class NSMutableDictionary;

@interface _FPMetadata : NSDictionary {
    struct TUnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fLock; } _lock;
    NSMutableDictionary *_dict;
    BOOL _upgradedLanguages;
}

@property (readonly, nonatomic) BOOL _hasUpgradedLanguages;

- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id).cxx_construct;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)init;
- (void)_upgradeLanguagesIfNecessary;
- (id)initWithMutableDictionary:(id)a0;

@end
