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
+ (id)na_identity;
+ (long long)contentTypeForDictionary:(id)a0;
+ (id)tipIdFromDictionary:(id)a0;

- (id)actions;
- (id)bodyContent;
- (id)shortTitle;
- (id)bodyText;
- (id)debugDescription;
- (id)webURLPath;
- (id)URLWithReferrer:(id)a0;
- (id)eyebrowText;
- (BOOL)hasImage;
- (BOOL)hasVideo;
- (id)footnoteContent;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isHardwareWelcome;
- (BOOL)isSoftwareWelcome;
- (BOOL)isSwitcherWelcome;
- (void)encodeWithCoder:(id)a0;
- (void)removeCollectionIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsLinks;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)title;
- (id)shareText;
- (id)textContent;
- (id)fullContentAssets;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)summary;
- (id)text;
- (id)assets;
- (id)initWithCoder:(id)a0;
- (void)addCollectionIdentifier:(id)a0;
- (BOOL)textContainsHTML;

@end
