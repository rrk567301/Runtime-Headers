@class NSString, CCTextUnderstandingLocation, CCTextUnderstandingContact;

@interface CCTextUnderstandingGenericEvent : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) CCTextUnderstandingLocation *startLocation;
@property (readonly, nonatomic) CCTextUnderstandingLocation *endLocation;
@property (readonly, nonatomic) NSString *confirmationNumber;
@property (readonly, nonatomic) NSString *bookingProvider;
@property (readonly, nonatomic) CCTextUnderstandingContact *guest;

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
- (id)initWithTitle:(id)a0 startLocation:(id)a1 endLocation:(id)a2 confirmationNumber:(id)a3 bookingProvider:(id)a4 guest:(id)a5 error:(id *)a6;

@end
