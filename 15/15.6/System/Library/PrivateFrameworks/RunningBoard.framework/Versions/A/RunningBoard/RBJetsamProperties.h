@interface RBJetsamProperties : NSObject {
    id _memoryLimitCategories;
    id _globalProperties;
    int _taskLimit;
    int _unLimit;
    char _freezerEligibleSet;
}

@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic, getter=isFreezerEligible) char freezerEligible;

+ (id)jetsamPropertiesForProperties:(id)a0 globalProperties:(id)a1 taskLimit:(int)a2 unLimit:(int)a3;

- (id)description;
- (void).cxx_destruct;
- (id)_propertiesDescription;
- (id)_altKeyForCategory:(id)a0 strength:(unsigned char)a1;
- (unsigned char)_altStrength:(unsigned char)a0;
- (id)_defaultKeyForCategory:(id)a0 strength:(unsigned char)a1;
- (id)_directPropertyDescription:(id)a0;
- (id)_initWithProperties:(id)a0 globalProperties:(id)a1 taskLimit:(int)a2 unLimit:(int)a3;
- (int)_integerLimitValue:(id)a0;
- (id)_keyForCategory:(id)a0 strength:(unsigned char)a1;
- (void)_setLimitFor:(id)a0 strength:(unsigned char)a1 toValue:(id)a2;
- (id)getValueFrom:(id)a0 forKey:(id)a1;
- (int)memoryLimitForCategory:(id)a0 strength:(unsigned char *)a1;

@end
