@class NSLocale;

@interface NSAutoLocale : NSLocale {
    NSLocale *loc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (Class)classForCoder;
- (id)objectForKey:(id)a0;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (void)_setDoesNotRequireSpecialCaseHandling;
- (id)_prefs;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)_init;
- (void)_update:(id)a0;

@end
