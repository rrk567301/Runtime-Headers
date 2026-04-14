@class NSString, NSMutableDictionary;

@interface ScreenSaverDefaults : NSUserDefaults {
    NSMutableDictionary *_defaults;
    NSMutableDictionary *_registeredDefaults;
    NSString *_userName;
    NSString *_domainName;
    BOOL _dirty;
}

+ (id)standardUserDefaults;
+ (void)resetStandardUserDefaults;
+ (id)defaultModuleName;
+ (id)defaultsForUser:(id)a0 moduleName:(id)a1;
+ (id)defaultsForEngine;
+ (id)defaultsForModule:(id)a0;
+ (id)defaultsForModuleWithName:(id)a0;

- (void)dealloc;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (BOOL)synchronize;
- (id)volatileDomainNames;
- (id)dictionaryRepresentation;
- (void)registerDefaults:(id)a0;
- (id)volatileDomainForName:(id)a0;
- (void)setVolatileDomain:(id)a0 forName:(id)a1;
- (void)removeVolatileDomainForName:(id)a0;
- (id)persistentDomainForName:(id)a0;
- (void)setPersistentDomain:(id)a0 forName:(id)a1;
- (void)removePersistentDomainForName:(id)a0;
- (BOOL)reload;
- (id)registeredDefaults;
- (id)_removeSecurityKeysFromDefaults:(id)a0;
- (id)activeModule;
- (void)removeDefaultsForModuleWithName:(id)a0;
- (id)initWithUser:(id)a0 moduleName:(id)a1;

@end
