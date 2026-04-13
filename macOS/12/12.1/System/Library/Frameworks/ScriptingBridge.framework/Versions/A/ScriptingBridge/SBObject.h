@class SBAppContext;

@interface SBObject : NSObject <NSCoding> {
    struct AEDesc { unsigned int descriptorType; struct OpaqueAEDataStorageType **dataHandle; } _specifier;
    SBAppContext *_ctx;
    id _reserved;
}

- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)description;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)_context;
- (id)get;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)specifier;
- (const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)_specifier;
- (id)context;
- (id)initWithProperties:(id)a0;
- (id)properties;
- (id)lastError;
- (void)setLastError:(id)a0;
- (void)setTo:(id)a0;
- (id)initWithContext:(id)a0 specifier:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (BOOL)isRangeSpecifier;
- (id)childWithClass:(Class)a0 code:(unsigned int)a1 keyForm:(unsigned int)a2 keyData:(const void *)a3 length:(unsigned long long)a4 type:(unsigned int)a5;
- (id)childWithClass:(Class)a0 code:(unsigned int)a1 keyForm:(unsigned int)a2 keyData:(id)a3;
- (id)positionBefore;
- (id)sendEvent:(unsigned int)a0 id:(unsigned int)a1 parameters:(unsigned int)a2;
- (id)sendEvent:(unsigned int)a0 id:(unsigned int)a1 format:(const char *)a2;
- (id)propertyWithCode:(unsigned int)a0;
- (id)specifierDescription;
- (id)qualifiedSpecifier;
- (id)initWithClass:(Class)a0 properties:(id)a1 data:(id)a2;
- (unsigned int)_wanttype:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0;
- (id)childWithClass:(Class)a0 code:(unsigned int)a1 keyForm:(unsigned int)a2 keyDesc:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a3;
- (id)childWithClass:(Class)a0 code:(unsigned int)a1 keyForm:(unsigned int)a2 keyData:(id)a3 type:(unsigned int)a4;
- (unsigned int)wanttype;
- (id)descriptionForSpecifier:(id)a0;
- (id)qualify:(id)a0;
- (BOOL)_shouldUseForwarding;
- (id)initWithApplication:(id)a0 specifier:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (id)initWithElementCode:(unsigned int)a0 properties:(id)a1 data:(id)a2;
- (id)positionAfter;
- (id)propertyWithClass:(Class)a0 code:(unsigned int)a1;
- (id)elementArrayWithCode:(unsigned int)a0;
- (id)elementWithCode:(unsigned int)a0 atIndex:(int)a1;
- (id)elementWithCode:(unsigned int)a0 named:(id)a1;
- (id)elementWithCode:(unsigned int)a0 ID:(id)a1;
- (id)sendEvent:(unsigned int)a0 id:(unsigned int)a1 keys:(const unsigned int *)a2 values:(const id *)a3 count:(unsigned long long)a4;

@end
