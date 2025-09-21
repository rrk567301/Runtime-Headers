@class TPSAssets, NSString, NSArray, TPSChecklistContent, TPSFullTipContent, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) NSString *eyebrow;
@property (copy, nonatomic) TPSFullTipContent *fullContent;
@property (copy, nonatomic) TPSActionableContent *miniContent;
@property (copy, nonatomic) TPSChecklistContent *checklistContent;
@property (copy, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, nonatomic, getter=isChecklistTip) BOOL checklistTip;
@property (readonly, nonatomic, getter=isTip) BOOL tip;
@property (readonly, nonatomic, getter=isIntro) BOOL intro;
@property (readonly, nonatomic, getter=isOutro) BOOL outro;
@property (readonly, nonatomic, getter=isLinkedArticle) BOOL linkedArticle;
@property (nonatomic, getter=isSiriSuggestion) BOOL siriSuggestion;
@property (nonatomic) long long contentStatus;
@property (readonly, copy, nonatomic) NSString *linkedDocumentId;
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;

+ (id)correlationIdForDictionary:(id)a0;
+ (long long)contentTypeForContentDictionary:(id)a0;
+ (id)tipIdFromDictionary:(id)a0;
+ (id)na_identity;
+ (long long)contentTypeForDictionary:(id)a0;

- (BOOL)hasImage;
- (id)shareText;
- (BOOL)hasVideo;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (BOOL)isSwitcherWelcome;
- (id)debugDescription;
- (id)bodyText;
- (id)bodyContent;
- (id)footnoteContent;
- (id)summary;
- (id)textContent;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isHardwareWelcome;
- (BOOL)containsLinks;
- (BOOL)isSoftwareWelcome;
- (id)webURLPath;
- (void)encodeWithCoder:(id)a0;
- (id)URLWithReferrer:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)shortTitle;
- (id)text;
- (id)title;
- (BOOL)textContainsHTML;
- (id)initWithCoder:(id)a0;
- (void)removeCollectionIdentifier:(id)a0;
- (id)actions;
- (id)assets;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)eyebrowText;
- (id)fullContentAssets;
- (void).cxx_destruct;
- (void)addCollectionIdentifier:(id)a0;

@end
