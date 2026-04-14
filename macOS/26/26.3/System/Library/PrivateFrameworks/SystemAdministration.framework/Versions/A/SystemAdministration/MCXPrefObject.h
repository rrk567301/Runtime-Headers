@class NSDictionary, NSMutableDictionary;

@interface MCXPrefObject : NSObject {
    NSMutableDictionary *mMCXDict;
    NSDictionary *mUnionPolicyKeys;
}

+ (id)objectWithRAWDictionary:(id)a0;

- (id)objectForKey:(id)a0 inDomain:(id)a1;
- (void)dealloc;
- (id)MCXRAWDict;
- (id)dictionaryForDomain:(id)a0;
- (BOOL)hasSettingsForDomains:(id)a0;
- (id)initWithRAWDictionary:(id)a0;
- (void)removeDictionaryForDomain:(id)a0;
- (void)removeDictionaryForDomains:(id)a0;
- (void)setDictionary:(id)a0 forDomain:(id)a1;
- (void)setMCXRAWDict:(id)a0;
- (void)setUnionPolicyKeys:(id)a0;

@end
