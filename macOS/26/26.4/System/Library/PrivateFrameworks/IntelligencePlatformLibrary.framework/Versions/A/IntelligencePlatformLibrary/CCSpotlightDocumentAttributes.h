@class NSArray, NSString;

@interface CCSpotlightDocumentAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSArray *audiences;
@property (readonly, nonatomic) NSString *contentDescription;
@property (readonly, nonatomic) NSString *creator;
@property (readonly, nonatomic) NSArray *encodingApplications;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (nonatomic) BOOL hasFileSize;
@property (readonly, nonatomic) NSArray *fontNames;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (nonatomic) BOOL hasPageCount;
@property (readonly, nonatomic) unsigned int pageHeight;
@property (nonatomic) BOOL hasPageHeight;
@property (readonly, nonatomic) unsigned int pageWidth;
@property (nonatomic) BOOL hasPageWidth;
@property (readonly, nonatomic) NSString *securityMethod;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *theme;
@property (readonly, nonatomic) BOOL isPinned;
@property (nonatomic) BOOL hasIsPinned;
@property (readonly, nonatomic) NSArray *hashtags;

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
- (id)initWithAudiences:(id)a0 contentDescription:(id)a1 creator:(id)a2 encodingApplications:(id)a3 fileSize:(id)a4 fontNames:(id)a5 identifier:(id)a6 kind:(id)a7 pageCount:(id)a8 pageHeight:(id)a9 pageWidth:(id)a10 securityMethod:(id)a11 subject:(id)a12 theme:(id)a13 error:(id *)a14;
- (id)initWithAudiences:(id)a0 contentDescription:(id)a1 creator:(id)a2 encodingApplications:(id)a3 fileSize:(id)a4 fontNames:(id)a5 identifier:(id)a6 kind:(id)a7 pageCount:(id)a8 pageHeight:(id)a9 pageWidth:(id)a10 securityMethod:(id)a11 subject:(id)a12 theme:(id)a13 isPinned:(id)a14 hashtags:(id)a15 error:(id *)a16;

@end
