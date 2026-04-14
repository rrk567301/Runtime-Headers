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

- (id)debugDescription;
- (id)accessibilityDescription;
- (id)contactIdentifier;
- (id)description;
- (id)category;
- (id)title;
- (void).cxx_destruct;
- (id)ef_publicDescription;
- (id)subtitle;
- (id)initWithCoder:(id)a0;
- (id)image;
- (void)encodeWithCoder:(id)a0;
- (id)spotlightSuggestion;
- (id)_allMailboxesSuggestionTitle;
- (id)_joinRecentsTitleComponents:(id)a0;
- (id)_recentsTitle;
- (id)initWithSpotlightSuggestion:(id)a0 isAllMailboxes:(BOOL)a1;
- (BOOL)isAllMailboxes;

@end
