@class MUISearchAtomSuggestion, MUISearchSuggestionCategoryScope, NSPredicate;

@interface MUISearchScopedSuggestion : MUISearchAtomSuggestion <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MUISearchAtomSuggestion *suggestion;
@property (nonatomic) unsigned long long selectedScopeIndex;
@property (readonly, nonatomic) MUISearchSuggestionCategoryScope *selectedScope;
@property (readonly, nonatomic) NSPredicate *predicate;

+ (id)scopedSuggestion:(id)a0;
+ (id)scopedSuggestion:(id)a0 selectedScopeIndex:(unsigned long long)a1;

- (id)contactIdentifier;
- (id)image;
- (void)encodeWithCoder:(id)a0;
- (id)category;
- (id)description;
- (id)subtitle;
- (id)title;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;
- (id)atomImage;
- (id)atomTitle;
- (id)initWithSuggestion:(id)a0 selectedScopeIndex:(unsigned long long)a1;
- (id)predicateWithSelectedScope:(id)a0;

@end
