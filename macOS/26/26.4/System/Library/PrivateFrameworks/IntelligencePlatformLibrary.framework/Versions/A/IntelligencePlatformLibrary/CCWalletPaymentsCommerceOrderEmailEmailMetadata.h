@class NSString, NSDate;

@interface CCWalletPaymentsCommerceOrderEmailEmailMetadata : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_dateSent;
    double _raw_dateSent;
}

@property (readonly, nonatomic) NSString *messageID;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *senderDomain;
@property (readonly, nonatomic) NSString *fromEmailAddress;
@property (readonly, nonatomic) NSString *fromDisplayName;
@property (readonly, nonatomic) NSString *toEmailAddress;
@property (readonly, nonatomic) NSString *toDisplayName;
@property (readonly, nonatomic) NSString *replyToEmailAddress;
@property (readonly, nonatomic) NSString *replyToDisplayName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)dateSent;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithMessageID:(id)a0 dateSent:(id)a1 subject:(id)a2 senderDomain:(id)a3 fromEmailAddress:(id)a4 fromDisplayName:(id)a5 toEmailAddress:(id)a6 toDisplayName:(id)a7 replyToEmailAddress:(id)a8 replyToDisplayName:(id)a9 error:(id *)a10;

@end
