@class NSArray, NSString, NSData, NSDate;

@interface CCSpotlightMessageAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_sentDate;
    double _raw_sentDate;
}

@property (readonly, nonatomic) NSData *HTMLContentData;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSArray *additionalRecipients;
@property (readonly, nonatomic) NSArray *authorAddresses;
@property (readonly, nonatomic) NSArray *authorEmailAddresses;
@property (readonly, nonatomic) NSArray *authorNames;
@property (readonly, nonatomic) NSArray *authors;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *hiddenAdditionalRecipients;
@property (readonly, nonatomic) NSArray *instantMessageAddresses;
@property (readonly, nonatomic) BOOL likelyJunk;
@property (nonatomic) BOOL hasLikelyJunk;
@property (readonly, nonatomic) NSArray *mailboxIdentifiers;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *primaryRecipients;
@property (readonly, nonatomic) NSArray *recipientAddresses;
@property (readonly, nonatomic) NSArray *recipientEmailAddresses;
@property (readonly, nonatomic) NSArray *recipientNames;
@property (readonly, nonatomic) NSString *textContent;
@property (readonly, nonatomic) NSArray *attachmentPaths;
@property (readonly, nonatomic) NSArray *attachmentTypes;
@property (readonly, nonatomic) NSArray *attachmentNames;
@property (readonly, nonatomic) NSArray *attachmentKinds;
@property (readonly, nonatomic) NSDate *sentDate;
@property (readonly, nonatomic) BOOL isFlagged;
@property (nonatomic) BOOL hasIsFlagged;
@property (readonly, nonatomic) BOOL isRead;
@property (nonatomic) BOOL hasIsRead;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) NSArray *emailHeaders;
@property (readonly, nonatomic) BOOL isVIP;
@property (nonatomic) BOOL hasIsVIP;
@property (readonly, nonatomic) unsigned int categories;
@property (nonatomic) BOOL hasCategories;
@property (readonly, nonatomic) unsigned int categoryType;
@property (nonatomic) BOOL hasCategoryType;
@property (readonly, nonatomic) NSString *serviceIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)sentDate;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithHTMLContentData:(id)a0 accountHandles:(id)a1 accountIdentifier:(id)a2 additionalRecipients:(id)a3 authorAddresses:(id)a4 authorEmailAddresses:(id)a5 authorNames:(id)a6 authors:(id)a7 emailAddresses:(id)a8 emailHeaders:(id)a9 hiddenAdditionalRecipients:(id)a10 instantMessageAddresses:(id)a11 likelyJunk:(id)a12 mailboxIdentifiers:(id)a13 phoneNumbers:(id)a14 primaryRecipients:(id)a15 recipientAddresses:(id)a16 recipientEmailAddresses:(id)a17 recipientNames:(id)a18 textContent:(id)a19 error:(id *)a20;
- (id)initWithHTMLContentData:(id)a0 accountHandles:(id)a1 accountIdentifier:(id)a2 additionalRecipients:(id)a3 authorAddresses:(id)a4 authorEmailAddresses:(id)a5 authorNames:(id)a6 authors:(id)a7 emailAddresses:(id)a8 hiddenAdditionalRecipients:(id)a9 instantMessageAddresses:(id)a10 likelyJunk:(id)a11 mailboxIdentifiers:(id)a12 phoneNumbers:(id)a13 primaryRecipients:(id)a14 recipientAddresses:(id)a15 recipientEmailAddresses:(id)a16 recipientNames:(id)a17 textContent:(id)a18 attachmentPaths:(id)a19 attachmentTypes:(id)a20 attachmentNames:(id)a21 attachmentKinds:(id)a22 sentDate:(id)a23 isFlagged:(id)a24 isRead:(id)a25 threadIdentifier:(id)a26 emailHeaders:(id)a27 isVIP:(id)a28 categories:(id)a29 categoryType:(id)a30 serviceIdentifier:(id)a31 error:(id *)a32;

@end
