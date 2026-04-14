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

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)image;
- (id)category;
- (id)title;
- (id)subtitle;
- (id)accessibilityDescription;
- (id)contactIdentifier;
- (id)spotlightSuggestion;
- (id)initWithSpotlightSuggestion:(id)a0 isAllMailboxes:(BOOL)a1;
- (BOOL)isAllMailboxes;
- (id)_allMailboxesSuggestionTitle;
- (id)_recentsTitle;
- (id)_joinRecentsTitleComponents:(id)a0;

@end
