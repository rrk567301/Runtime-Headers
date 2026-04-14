@class NSArray, NSString, NSData, NSDate;

@interface CCSpotlightGeneralAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_metadataModificationDate;
    double _raw_metadataModificationDate;
}

@property (readonly, nonatomic) NSArray *alternateNames;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSArray *contentTypeTree;
@property (readonly, nonatomic) NSString *contentURL;
@property (readonly, nonatomic) NSString *darkThumbnailURL;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSDate *metadataModificationDate;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned int rankingHint;
@property (nonatomic) BOOL hasRankingHint;
@property (readonly, nonatomic) NSString *relatedUniqueIdentifier;
@property (readonly, nonatomic) NSData *thumbnailData;
@property (readonly, nonatomic) NSString *thumbnailURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *weakRelatedUniqueIdentifier;
@property (readonly, nonatomic) NSString *accountType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)metadataModificationDate;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithAlternateNames:(id)a0 contentType:(id)a1 contentTypeTree:(id)a2 contentURL:(id)a3 darkThumbnailURL:(id)a4 displayName:(id)a5 keywords:(id)a6 metadataModificationDate:(id)a7 path:(id)a8 rankingHint:(id)a9 relatedUniqueIdentifier:(id)a10 thumbnailData:(id)a11 thumbnailURL:(id)a12 title:(id)a13 domainIdentifier:(id)a14 weakRelatedUniqueIdentifier:(id)a15 accountType:(id)a16 error:(id *)a17;
- (id)initWithAlternateNames:(id)a0 contentType:(id)a1 contentTypeTree:(id)a2 contentURL:(id)a3 darkThumbnailURL:(id)a4 displayName:(id)a5 keywords:(id)a6 metadataModificationDate:(id)a7 path:(id)a8 rankingHint:(id)a9 relatedUniqueIdentifier:(id)a10 thumbnailData:(id)a11 thumbnailURL:(id)a12 title:(id)a13 domainIdentifier:(id)a14 weakRelatedUniqueIdentifier:(id)a15 error:(id *)a16;

@end
