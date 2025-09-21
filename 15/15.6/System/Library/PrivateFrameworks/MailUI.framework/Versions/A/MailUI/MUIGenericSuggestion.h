@class NSColor, NSAttributedString, CSSuggestion;

@interface MUIGenericSuggestion : MUISearchAtomSuggestion {
    CSSuggestion *_spotlightSuggestion;
    char _isAllMailboxes;
}

@property (readonly, nonatomic) long long resultCount;
@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) NSColor *imageTintColor;
@property (readonly, nonatomic) char isRecent;

+ (char)supportsSecureCoding;
+ (id)allMailboxesSuggestionWithSpotlightSuggestion:(id)a0;
+ (id)genericSuggestionWithSpotlightSuggestion:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)image;
- (id)category;
- (id)subtitle;
- (id)title;
- (id)accessibilityDescription;
- (id)contactIdentifier;
- (id)ef_publicDescription;
- (id)spotlightSuggestion;
- (id)_allMailboxesSuggestionTitle;
- (id)_joinRecentsTitleComponents:(id)a0;
- (id)_recentsTitle;
- (id)initWithSpotlightSuggestion:(id)a0 isAllMailboxes:(char)a1;
- (char)isAllMailboxes;

@end
