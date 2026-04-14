@class NSArray, CCSpotlightUniformType;

@interface CCSpotlightActionAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSArray *actionIdentifiers;
@property (readonly, nonatomic) BOOL supportsNavigation;
@property (nonatomic) BOOL hasSupportsNavigation;
@property (readonly, nonatomic) BOOL supportsPhoneCall;
@property (nonatomic) BOOL hasSupportsPhoneCall;
@property (readonly, nonatomic) CCSpotlightUniformType *sharedItemContentType;

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
- (id)initWithActionIdentifiers:(id)a0 supportsNavigation:(id)a1 supportsPhoneCall:(id)a2 sharedItemContentType:(id)a3 error:(id *)a4;

@end
