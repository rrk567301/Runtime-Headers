@class NSString, NSImage, NSDate, NSColor;

@interface MUISearchAtomSuggestion : MUISearchSuggestion

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSColor *tintColor;
@property (readonly, nonatomic) NSColor *focusedTintColor;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *atomTitle;
@property (readonly, nonatomic) NSImage *atomImage;
@property (readonly, nonatomic) long long option;
@property (retain, nonatomic) NSDate *lastUsedTime;

+ (id)log;
+ (id)allMailboxesSuggestionFromSpotlightSuggestion:(id)a0;
+ (id)suggestionFromSpotlightSuggestion:(id)a0 shouldShowAvaters:(BOOL)a1;

- (id)debugDescription;
- (id)ef_publicDescription;
- (void).cxx_destruct;
- (id)description;
- (id)createSearchResultWithRankingScore:(long long)a0;
- (id)predicateWithSelectedScope:(id)a0;

@end
