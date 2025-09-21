@interface CalCFPreferencesStore : NSObject <CalPreferencesStore>

+ (id)shared;

- (char)getBoolean:(char *)a0 forDomain:(id)a1 key:(id)a2;
- (char)getInteger:(long long *)a0 forDomain:(id)a1 key:(id)a2;
- (char)getValue:(id *)a0 forDomain:(id)a1 key:(id)a2;
- (void)setValue:(id)a0 forDomain:(id)a1 key:(id)a2;
- (void)synchronizeDomain:(id)a0;

@end
