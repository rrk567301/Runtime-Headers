@class NSString, CCTextUnderstandingAddress;

@interface CCTextUnderstandingLocation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) CCTextUnderstandingAddress *address;
@property (readonly, nonatomic) NSString *coordinates;
@property (readonly, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) unsigned int category;
@property (readonly, nonatomic) unsigned int algorithm;

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
- (id)initWithLabel:(id)a0 address:(id)a1 coordinates:(id)a2 timeZone:(id)a3 category:(unsigned int)a4 algorithm:(unsigned int)a5 error:(id *)a6;

@end
