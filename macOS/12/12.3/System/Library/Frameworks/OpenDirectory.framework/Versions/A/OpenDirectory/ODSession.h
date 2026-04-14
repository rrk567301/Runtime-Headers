@class NSArray;

@interface ODSession : NSObject {
    void *_internal;
}

@property (readonly, copy) NSArray *configurationTemplateNames;
@property (readonly, copy) NSArray *mappingTemplateNames;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)defaultSession;
+ (id)sessionWithOptions:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (unsigned long long)_cfTypeID;
- (struct __ODSession { } *)__getODSessionRef;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (BOOL)externalizedAuthorizationForm:(struct { char x0[32]; } *)a0 authorization:(id)a1 node:(id)a2 error:(id *)a3;
- (id)sendConfigurationCode:(long long)a0 propertyList:(id)a1 authorization:(id)a2 error:(id *)a3;
- (BOOL)deleteConfigurationWithNodename:(id)a0 authorization:(id)a1 error:(id *)a2;
- (id)configurationDictionaryForNodename:(id)a0;
- (id)templatesInFolder:(id)a0;
- (id)nodeNamesAndReturnError:(id *)a0;
- (id)configurationAuthorizationAllowingUserInteraction:(BOOL)a0 error:(id *)a1;
- (BOOL)addConfiguration:(id)a0 authorization:(id)a1 error:(id *)a2;
- (BOOL)deleteConfiguration:(id)a0 authorization:(id)a1 error:(id *)a2;
- (id)configurationForNodename:(id)a0;

@end
