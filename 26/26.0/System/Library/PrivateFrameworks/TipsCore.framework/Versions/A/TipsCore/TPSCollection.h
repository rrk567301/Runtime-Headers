@class NSString, NSArray, TPSContent, TPSAssets, TPSGradient;

@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *countText;
@property (copy, nonatomic) TPSContent *featuredContent;
@property (copy, nonatomic) TPSContent *tileContent;
@property (copy, nonatomic) TPSAssets *tocAssets;
@property (copy, nonatomic) TPSAssets *collectionAssets;
@property (copy, nonatomic) TPSGradient *gradient;
@property (readonly, nonatomic, getter=isChecklist) BOOL checklist;
@property (nonatomic, getter=isTopFeatured) BOOL topFeatured;
@property (nonatomic) BOOL containsIntroTip;
@property (nonatomic) BOOL containsOutroTip;
@property (copy, nonatomic) NSArray *tipIdentifiers;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *featuredTitle;
@property (readonly, copy, nonatomic) NSString *featuredText;
@property (readonly, copy, nonatomic) TPSAssets *featuredAssets;
@property (readonly, copy, nonatomic) TPSAssets *tileAssets;

+ (id)na_identity;
+ (id)collectionLabelForDictionary:(id)a0;
+ (id)collectionOrderIdentifierForDictionary:(id)a0;
+ (id)tipIdentifiersForDictionary:(id)a0;

- (void)updateWithContentDictionary:(id)a0 metadata:(id)a1 clientConditionIdentifier:(id)a2 fileIdMap:(id)a3 clientConditions:(id)a4;
- (id)footnote;
- (BOOL)isSwitcherWelcome;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)featuredAssets;
- (BOOL)isHardwareWelcome;
- (long long)count;
- (BOOL)isSoftwareWelcome;
- (void)encodeWithCoder:(id)a0;
- (long long)countExcludingBookends;
- (long long)priority;
- (id)featuredTitle;
- (id)tileAssets;
- (id)URLWithReferrer:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)text;
- (id)title;
- (id)initWithCoder:(id)a0;
- (id)assets;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
