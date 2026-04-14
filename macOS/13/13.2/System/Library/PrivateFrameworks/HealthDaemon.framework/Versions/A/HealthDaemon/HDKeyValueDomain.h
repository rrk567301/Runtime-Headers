@class NSString, HDProfile;

@interface HDKeyValueDomain : NSObject {
    HDProfile *_profile;
    Class _entityClass;
}

@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) NSString *domainName;

+ (id)_wristTemperatureIdentifierDomainWithProfile:(id)a0;
+ (id)healthAppUserDefaultsDomainWithProfile:(id)a0;

- (void).cxx_destruct;
- (BOOL)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (BOOL)setString:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (BOOL)removeValuesForKeys:(id)a0 error:(id *)a1;
- (id)numberForKey:(id)a0 error:(id *)a1;
- (BOOL)setNumber:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)setDate:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)setPropertyListValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)dateForKey:(id)a0 error:(id *)a1;
- (id)propertyListValueForKey:(id)a0 error:(id *)a1;
- (id)_wristTemperatureSerialNumbersBySourceIdentifier;
- (id)_wristTemperatureResolvedSourceIdentifiersBySourceIdentifier;
- (id)initWithCategory:(long long)a0 domainName:(id)a1 profile:(id)a2;
- (id)quantityForKey:(id)a0 unit:(id)a1 error:(id *)a2;
- (id)valuesForKeys:(id)a0 error:(id *)a1;
- (id)allValuesWithError:(id *)a0;
- (id)modificationDatesForKeys:(id)a0 error:(id *)a1;
- (BOOL)setData:(id)a0 forKey:(id)a1 syncIdentity:(long long)a2 error:(id *)a3;
- (BOOL)setQuantity:(id)a0 unit:(id)a1 forKey:(id)a2 error:(id *)a3;
- (BOOL)setValuesWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)setValueForAllKeys:(id)a0 error:(id *)a1;

@end
