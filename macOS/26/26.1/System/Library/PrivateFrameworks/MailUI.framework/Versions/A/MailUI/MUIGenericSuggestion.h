@class NSColor, NSAttributedString, CSSuggestion;

@interface MUIGenericSuggestion : MUISearchAtomSuggestion {
    CSSuggestion *_spotlightSuggestion;
    BOOL _isAllMailboxes;
}

@property (readonly, nonatomic) long long resultCount;
@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) NSColor *imageTintColor;
@property (readonly, nonatomic) BOOL isRecent;

+ (BOOL)supportsSecureCoding;
+ (id)allMailboxesSuggestionWithSpotlightSuggestion:(id)a0;
+ (id)genericSuggestionWithSpotlightSuggestion:(id)a0;

- (id)contactIdentifier;
- (id)image;
- (id)accessibilityDescription;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)a0;
- (id)category;
- (id)description;
- (id)subtitle;
- (id)title;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)spotlightSuggestion;
- (id)_allMailboxesSuggestionTitle;
- (id)_joinRecentsTitleComponents:(id)a0;
- (id)_recentsTitle;
- (id)initWithSpotlightSuggestion:(id)a0 isAllMailboxes:(BOOL)a1;
- (BOOL)isAllMailboxes;

@end
