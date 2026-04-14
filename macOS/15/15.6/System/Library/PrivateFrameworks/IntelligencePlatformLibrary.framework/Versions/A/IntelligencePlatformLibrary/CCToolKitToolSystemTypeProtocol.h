@class CCToolKitToolSystemTypeProtocolPersistentFileIdentifiable, CCToolKitToolSystemTypeProtocolAssistantSchema, CCToolKitToolSystemTypeProtocolIntentUpdatableEntity;

@interface CCToolKitToolSystemTypeProtocol : CCItemMessage

@property (readonly, nonatomic) unsigned int unk;
@property (readonly, nonatomic) unsigned int mailAccount;
@property (readonly, nonatomic) unsigned int mailAddressee;
@property (readonly, nonatomic) unsigned int mailMessage;
@property (readonly, nonatomic) unsigned int mailbox;
@property (readonly, nonatomic) unsigned int intentMessage;
@property (readonly, nonatomic) unsigned int messageGroup;
@property (readonly, nonatomic) unsigned int messageParticipants;
@property (readonly, nonatomic) unsigned int uniqueEntity;
@property (readonly, nonatomic) CCToolKitToolSystemTypeProtocolIntentUpdatableEntity *intentUpdatableEntity;
@property (readonly, nonatomic) unsigned int urlRepresentable;
@property (readonly, nonatomic) unsigned int visualSearch;
@property (readonly, nonatomic) unsigned int visualSearchOcr;
@property (readonly, nonatomic) CCToolKitToolSystemTypeProtocolAssistantSchema *assistantSchema;
@property (readonly, nonatomic) unsigned int updatableEntity;
@property (readonly, nonatomic) CCToolKitToolSystemTypeProtocolPersistentFileIdentifiable *persistentFileIdentifiable;
@property (readonly, nonatomic) unsigned int transientEntity;
@property (readonly, nonatomic) unsigned int indexedEntity;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
