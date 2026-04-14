@class MUISearchSuggestionCategory, CSSuggestion, NSPredicate;
@protocol MUISearchSuggestionDelegate;

@interface MUISearchSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CSSuggestion *spotlightSuggestion;
@property (readonly, nonatomic) MUISearchSuggestionCategory *category;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) BOOL supportsRanking;
@property (readonly, nonatomic) double ranking;
@property (readonly, nonatomic) BOOL exactMatch;
@property (weak, nonatomic) id<MUISearchSuggestionDelegate> delegate;
@property (readonly, nonatomic) BOOL isLegacy;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
