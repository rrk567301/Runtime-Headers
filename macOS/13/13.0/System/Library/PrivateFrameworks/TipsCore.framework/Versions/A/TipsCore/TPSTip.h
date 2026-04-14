@class TPSAssets, NSString, NSArray, TPSFullTipContent, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) NSString *eyebrow;
@property (copy, nonatomic) NSString *linkedDocumentId;
@property (copy, nonatomic) TPSFullTipContent *fullContent;
@property (copy, nonatomic) TPSActionableContent *miniContent;
@property (copy, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion;
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;

+ (id)na_identity;
+ (long long)contentTypeForContentDictionary:(id)a0;
+ (id)tipIdFromDictionary:(id)a0;
+ (long long)contentTypeForDictionary:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)actions;
- (BOOL)hasVideo;
- (id)summary;
- (BOOL)hasImage;
- (id)bodyText;
- (id)shortTitle;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)bodyContent;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)URLWithReferrer:(id)a0;
- (BOOL)isHardwareWelcome;
- (BOOL)isSoftwareWelcome;
- (BOOL)containsLinks;
- (BOOL)textContainsHTML;
- (id)eyebrowText;
- (id)webURLPath;
- (id)footnoteContent;
- (id)shareText;
- (id)fullContentAssets;
- (void)addCollectionIdentifier:(id)a0;
- (void)removeCollectionIdentifier:(id)a0;

@end
