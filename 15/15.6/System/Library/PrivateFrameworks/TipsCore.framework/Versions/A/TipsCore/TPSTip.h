@class TPSAssets, NSString, NSArray, TPSChecklistContent, TPSFullTipContent, TPSActionableContent;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long subContentType;
@property (copy, nonatomic) NSString *eyebrow;
@property (copy, nonatomic) TPSFullTipContent *fullContent;
@property (copy, nonatomic) TPSActionableContent *miniContent;
@property (copy, nonatomic) TPSChecklistContent *checklistContent;
@property (copy, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic, getter=isCompleted) char completed;
@property (readonly, nonatomic, getter=isChecklistTip) char checklistTip;
@property (readonly, nonatomic, getter=isTip) char tip;
@property (readonly, nonatomic, getter=isIntro) char intro;
@property (readonly, nonatomic, getter=isOutro) char outro;
@property (readonly, nonatomic, getter=isLinkedArticle) char linkedArticle;
@property (nonatomic, getter=isSiriSuggestion) char siriSuggestion;
@property (nonatomic) long long contentStatus;
@property (readonly, copy, nonatomic) NSString *linkedDocumentId;
@property (readonly, copy, nonatomic) TPSAssets *fullContentAssets;

+ (id)na_identity;
+ (long long)contentTypeForContentDictionary:(id)a0;
+ (long long)contentTypeForDictionary:(id)a0;
+ (id)correlationIdForDictionary:(id)a0;
+ (id)tipIdFromDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)title;
- (id)actions;
- (id)text;
- (id)assets;
- (id)textContent;
- (char)hasVideo;
- (id)summary;
- (char)hasImage;
- (id)bodyText;
- (id)shortTitle;
- (id)bodyContent;
- (id)fullContentAssets;
- (id)footnoteContent;
- (id)URLWithReferrer:(id)a0;
- (void)addCollectionIdentifier:(id)a0;
- (char)containsLinks;
- (id)eyebrowText;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (char)isHardwareWelcome;
- (char)isSoftwareWelcome;
- (char)isSwitcherWelcome;
- (void)removeCollectionIdentifier:(id)a0;
- (id)shareText;
- (char)textContainsHTML;
- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)webURLPath;

@end
