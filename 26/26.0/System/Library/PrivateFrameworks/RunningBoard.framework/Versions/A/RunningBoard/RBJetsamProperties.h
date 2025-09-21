@interface RBJetsamProperties : NSObject {
    id _memoryLimitCategories;
    id _globalProperties;
    int _taskLimit;
    int _unLimit;
    BOOL _freezerEligibleSet;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isFreezerEligible) BOOL freezerEligible;

+ (id)jetsamPropertiesForProperties:(id)a0 globalProperties:(id)a1 taskLimit:(int)a2 unLimit:(int)a3;

- (int)_integerLimitValue:(id)a0;
- (id)_propertiesDescription;
- (id)_altKeyForCategory:(id)a0 strength:(unsigned char)a1;
- (id)_directPropertyDescription:(id)a0;
- (id)description;
- (id)_defaultKeyForCategory:(id)a0 strength:(unsigned char)a1;
- (id)_keyForCategory:(id)a0 strength:(unsigned char)a1;
- (unsigned char)_altStrength:(unsigned char)a0;
- (id)getValueFrom:(id)a0 forKey:(id)a1;
- (void)_setLimitFor:(id)a0 strength:(unsigned char)a1 toValue:(id)a2;
- (void)overrideMemoryLimitCategoriesWithProperties:(id)a0;
- (int)memoryLimitForCategory:(id)a0 strength:(unsigned char *)a1;
- (id)_initWithProperties:(id)a0 globalProperties:(id)a1 taskLimit:(int)a2 unLimit:(int)a3;
- (void).cxx_destruct;

@end
