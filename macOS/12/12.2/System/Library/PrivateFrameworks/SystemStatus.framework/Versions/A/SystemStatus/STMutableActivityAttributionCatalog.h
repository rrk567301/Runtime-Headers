@class NSString;

@interface STMutableActivityAttributionCatalog : STActivityAttributionCatalog <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)applyDiff:(id)a0;
- (void)setAttributions:(id)a0 forKey:(id)a1;
- (void)addAttribution:(id)a0 forKey:(id)a1;
- (void)removeAttribution:(id)a0 forKey:(id)a1;
- (void)removeAttributionsForKey:(id)a0;

@end
