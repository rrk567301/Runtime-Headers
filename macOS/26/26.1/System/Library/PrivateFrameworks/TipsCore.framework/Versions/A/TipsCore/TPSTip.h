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

+ (id)na_identity;
+ (id)correlationIdForDictionary:(id)a0;
+ (long long)contentTypeForDictionary:(id)a0;
+ (id)tipIdFromDictionary:(id)a0;
+ (long long)contentTypeForContentDictionary:(id)a0;

- (BOOL)isSwitcherWelcome;
- (id)eyebrowText;
- (id)shortTitle;
- (BOOL)hasVideo;
- (BOOL)hasImage;
- (BOOL)isHardwareWelcome;
- (id)assets;
- (BOOL)isSoftwareWelcome;
- (BOOL)containsLinks;
- (unsigned long long)hash;
- (id)summary;
- (id)bodyContent;
- (id)fullContentAssets;
- (id)text;
- (id)webURLPath;
- (id)footnoteContent;
- (void)encodeWithCoder:(id)a0;
- (void)addCollectionIdentifier:(id)a0;
- (void)removeCollectionIdentifier:(id)a0;
- (id)textContent;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)shareText;
- (id)title;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)URLWithReferrer:(id)a0;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)actions;
- (BOOL)isEqual:(id)a0;
- (BOOL)textContainsHTML;
- (id)bodyText;

@end
