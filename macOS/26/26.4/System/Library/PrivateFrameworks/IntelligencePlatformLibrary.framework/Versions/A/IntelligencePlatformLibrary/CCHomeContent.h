@class CCHome, CCHomeService, CCHomeRoom, CCHomeZone, CCHomeTrigger, CCHomeServiceGroup, CCHomeAccessory, CCHomeScene;

@interface CCHomeContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCHome *home;
@property (readonly, nonatomic) CCHomeZone *zone;
@property (readonly, nonatomic) CCHomeRoom *room;
@property (readonly, nonatomic) CCHomeService *service;
@property (readonly, nonatomic) CCHomeServiceGroup *serviceGroup;
@property (readonly, nonatomic) CCHomeScene *scene;
@property (readonly, nonatomic) CCHomeTrigger *trigger;
@property (readonly, nonatomic) CCHomeAccessory *accessory;
@property (readonly, nonatomic) unsigned int entityType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 entityType:(unsigned int)a1 error:(id *)a2;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;

@end
