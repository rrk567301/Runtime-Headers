@class NSString, HDProfile, HKObserverSet;

@interface HDKeyValueDomain : NSObject {
    HDProfile *_profile;
    Class _entityClass;
    HKObserverSet *_observers;
}

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *domainName;

+ (id)_wristTemperatureIdentifierDomainWithProfile:(id)a0;
+ (id)healthAppUserDefaultsDomainWithProfile:(id)a0;

- (void)notifyObservers;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (char)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)numberForKey:(id)a0 error:(id *)a1;
- (char)setString:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (char)removeValuesForKeys:(id)a0 error:(id *)a1;
- (id)allValuesWithError:(id *)a0;
- (id)dateForKey:(id)a0 error:(id *)a1;
- (id)propertyListValueForKey:(id)a0 error:(id *)a1;
- (char)setDate:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)setNumber:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)setPropertyListValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)startObservation:(id)a0;
- (void)stopObservation:(id)a0;
- (id)modificationDatesForKeys:(id)a0 error:(id *)a1;
- (unsigned long long)_unitTest_countOfObservers;
- (id)_wristTemperatureResolvedSourceIdentifiersBySourceIdentifier;
- (id)_wristTemperatureSerialNumbersBySourceIdentifier;
- (id)initWithCategory:(long long)a0 domainName:(id)a1 profile:(id)a2;
- (id)quantityForKey:(id)a0 unit:(id)a1 error:(id *)a2;
- (char)setData:(id)a0 forKey:(id)a1 syncIdentity:(long long)a2 error:(id *)a3;
- (char)setQuantity:(id)a0 unit:(id)a1 forKey:(id)a2 error:(id *)a3;
- (char)setValueForAllKeys:(id)a0 error:(id *)a1;
- (char)setValuesWithDictionary:(id)a0 error:(id *)a1;
- (id)valuesForKeys:(id)a0 error:(id *)a1;

@end
