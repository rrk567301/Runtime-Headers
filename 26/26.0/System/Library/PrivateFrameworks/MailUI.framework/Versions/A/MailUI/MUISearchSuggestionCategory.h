@class NSArray, NSImage, NSString;

@interface MUISearchSuggestionCategory : NSObject <NSCopying, EFPubliclyDescribable>

@property (weak, nonatomic) MUISearchSuggestionCategory *groupingCategory;
@property (copy, nonatomic) NSImage *image;
@property (copy, nonatomic) NSImage *atomImage;
@property (copy, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSString *parsecCategory;
@property (copy, nonatomic) id /* block */ imageInstantiationBlock;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isLegacy;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genericCategory;
+ (id)topHitsCategory;
+ (id)contactCategory;
+ (id)allMailboxesCategory;
+ (id)documentCategory;
+ (id)instantAnswersCategory;
+ (id)linkCategory;
+ (id)locationCategory;
+ (id)recentGenericCategory;
+ (id)recentSearchCategory;
+ (id)suggestedSearchCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0;
- (unsigned long long)indexOfScopeWithIdentifier:(id)a0;
- (id)initWithDisplayName:(id)a0 groupingCategory:(id)a1;
- (BOOL)isGroupedInCategory:(id)a0;

@end
