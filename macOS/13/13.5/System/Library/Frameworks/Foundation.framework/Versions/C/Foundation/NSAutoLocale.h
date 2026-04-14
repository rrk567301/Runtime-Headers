@class NSLocale;

@interface NSAutoLocale : NSLocale {
    NSLocale *loc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)finalize;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (id)_init;
- (id)_prefForKey:(id)a0;
- (void)_setDoesNotRequireSpecialCaseHandling;
- (Class)classForCoder;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)objectForKey:(id)a0;
- (void)_update:(id)a0;

@end
