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

+ (id)tipIdFromDictionary:(id)a0;
+ (id)correlationIdForDictionary:(id)a0;
+ (id)na_identity;
+ (long long)contentTypeForContentDictionary:(id)a0;
+ (long long)contentTypeForDictionary:(id)a0;

- (BOOL)hasVideo;
- (BOOL)isHardwareWelcome;
- (BOOL)isSwitcherWelcome;
- (BOOL)hasImage;
- (id)debugDescription;
- (id)webURLPath;
- (id)URLWithReferrer:(id)a0;
- (BOOL)containsLinks;
- (id)assets;
- (void)removeCollectionIdentifier:(id)a0;
- (id)bodyContent;
- (id)bodyText;
- (id)footnoteContent;
- (id)actions;
- (id)textContent;
- (id)eyebrowText;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)shortTitle;
- (id)summary;
- (id)title;
- (id)text;
- (BOOL)textContainsHTML;
- (void).cxx_destruct;
- (id)fullContentAssets;
- (id)initWithCoder:(id)a0;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)shareText;
- (void)addCollectionIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSoftwareWelcome;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
