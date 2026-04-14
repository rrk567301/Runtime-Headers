@class NSString, CCToolKitToolDisplayRepresentationAltText, CCToolKitToolDisplayRepresentationImage, NSArray, CCToolKitToolDisplayRepresentationSubtitle, CCToolKitToolPluginModelData;

@interface CCToolKitToolDisplayRepresentation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationSubtitle *subtitle;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationAltText *altText;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationImage *image;
@property (readonly, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) CCToolKitToolPluginModelData *snippetPluginModel;

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
- (id)initWithTitle:(id)a0 subtitle:(id)a1 altText:(id)a2 image:(id)a3 synonyms:(id)a4 snippetPluginModel:(id)a5 error:(id *)a6;

@end
