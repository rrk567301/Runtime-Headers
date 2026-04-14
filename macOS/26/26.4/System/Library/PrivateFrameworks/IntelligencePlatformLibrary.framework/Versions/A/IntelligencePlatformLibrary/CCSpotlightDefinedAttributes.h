@class CCSpotlightPlaceAttributes, CCSpotlightMediaAttributes, CCSpotlightEventAttributes, CCSpotlightGeneralAttributes, CCSpotlightContainmentAttributes, CCSpotlightActionAttributes, CCSpotlightImageAttributes, CCSpotlightUserInvolvementAttributes, CCSpotlightMessageAttributes, CCSpotlightMusicAttributes, CCSpotlightItemRepresentationAttributes, CCSpotlightAppleIntelligenceAttributes, CCSpotlightDocumentAttributes;

@interface CCSpotlightDefinedAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCSpotlightAppleIntelligenceAttributes *appleIntelligence;
@property (readonly, nonatomic) CCSpotlightDocumentAttributes *document;
@property (readonly, nonatomic) CCSpotlightGeneralAttributes *general;
@property (readonly, nonatomic) CCSpotlightUserInvolvementAttributes *userInvolvement;
@property (readonly, nonatomic) CCSpotlightEventAttributes *event;
@property (readonly, nonatomic) CCSpotlightPlaceAttributes *place;
@property (readonly, nonatomic) CCSpotlightMediaAttributes *media;
@property (readonly, nonatomic) CCSpotlightMusicAttributes *music;
@property (readonly, nonatomic) CCSpotlightImageAttributes *image;
@property (readonly, nonatomic) CCSpotlightMessageAttributes *messages;
@property (readonly, nonatomic) CCSpotlightContainmentAttributes *containment;
@property (readonly, nonatomic) CCSpotlightActionAttributes *action;
@property (readonly, nonatomic) CCSpotlightItemRepresentationAttributes *itemRepresentation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithAppleIntelligence:(id)a0 document:(id)a1 general:(id)a2 userInvolvement:(id)a3 event:(id)a4 place:(id)a5 media:(id)a6 music:(id)a7 image:(id)a8 messages:(id)a9 containment:(id)a10 action:(id)a11 itemRepresentation:(id)a12 error:(id *)a13;

@end
