@class MUISearchSuggestionCategory, CSSuggestion, NSString, NSPredicate;
@protocol MUISearchSuggestionDelegate;

@interface MUISearchSuggestion : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) CSSuggestion *spotlightSuggestion;
@property (readonly, nonatomic) MUISearchSuggestionCategory *category;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) char supportsRanking;
@property (readonly, nonatomic) double ranking;
@property (readonly, nonatomic) char exactMatch;
@property (weak, nonatomic) id<MUISearchSuggestionDelegate> delegate;
@property (readonly, nonatomic) char isLegacy;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
