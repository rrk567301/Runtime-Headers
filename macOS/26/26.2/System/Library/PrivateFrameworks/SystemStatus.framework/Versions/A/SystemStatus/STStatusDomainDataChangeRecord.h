@class NSString, BSIntegerSet, NSMutableDictionary;

@interface STStatusDomainDataChangeRecord : NSObject <BSDebugDescriptionProviding, NSSecureCoding> {
    NSMutableDictionary *_fallbackDataByClientKeyByDomain;
    NSMutableDictionary *_entriesByDomain;
    NSMutableDictionary *_cachedCurrentDataByDomain;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;
@property (readonly, nonatomic) BSIntegerSet *domainsWithSignificantData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fallbackDataForClientKey:(id)a0 domain:(unsigned long long)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void)enumerateEntriesByDomainUsingBlock:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (void)removeAllEntriesForClientKey:(id)a0 domain:(unsigned long long)a1;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)addDiff:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)succinctDescription;
- (void)addEntriesFromDataChangeRecord:(id)a0 forDomain:(unsigned long long)a1 replacingClientKeysWithKey:(id)a2;
- (id)currentDataForDomain:(unsigned long long)a0;
- (void)setFallbackData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end
