@class NSSet, NSString, UTType, NSURL, NSArray, SFDetailedRowCardSection, SSPerformEntityQueryCommand;

@interface SSFilterResult : SFSearchResult_SpotlightExtras

@property (retain) SFDetailedRowCardSection *cardSection;
@property (retain, nonatomic) NSString *filterTitle;
@property (retain, nonatomic) NSString *filterSubtitle;
@property (copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) UTType *thumbnailType;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSURL *appURL;
@property (retain, nonatomic) NSArray *keywords;
@property (retain, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) NSArray *enabledDomains;
@property (retain, nonatomic) NSArray *folderScopeURLs;
@property (retain, nonatomic) SSPerformEntityQueryCommand *command;
@property (retain, nonatomic) NSArray *searchBarButtonItems;
@property (retain, nonatomic) NSSet *contentTypes;
@property (retain, nonatomic) NSSet *allowedTypes;
@property (retain, nonatomic) NSSet *blockedTypes;
@property (retain, nonatomic) UTType *parentType;

+ (id)applications;
+ (id)actions;
+ (id)pasteboard;
+ (id)windows;
+ (id)menuItem;
+ (id)files;
+ (id)customFilters;
+ (id)kindString;
+ (id)folders;
+ (id)PDF;
+ (id)UTTypeFilters;
+ (id)allFilters;
+ (id)buildFilterStringFromIncludes:(id)a0 allowedTypes:(id)a1 blockedTypes:(id)a2;
+ (id)buildHighlightedTextFromKeyword:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)metadataDomain;
+ (id)sharedLinks;
+ (BOOL)shouldShowPasteboardFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSearchString:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFilterTitle:(id)a0 symbolName:(id)a1 keywords:(id)a2 filterQuery:(id)a3 enabledDomains:(id)a4;
- (id)initWithFilterTitle:(id)a0 thumbnailType:(id)a1 symbolName:(id)a2 keywords:(id)a3 filterQueries:(id)a4 folderScopeURLs:(id)a5 enabledDomains:(id)a6 searchBarButtonItems:(id)a7 contentTypes:(id)a8 allowedTypes:(id)a9 blockedTypes:(id)a10 parentType:(id)a11 appBundleId:(id)a12 appURL:(id)a13 filterSubtitle:(id)a14;
- (BOOL)matchesOnFilterSearchString:(id)a0 andDisplayHighlightedMatchIfNecessary:(BOOL)a1;
- (void)buildResult;
- (id)initWithBundleId:(id)a0 appURL:(id)a1;
- (id)initWithFilterTitle:(id)a0 symbolName:(id)a1 folderScopeURLs:(id)a2;
- (BOOL)isObject:(id)a0 sameAsOther:(id)a1;

@end
