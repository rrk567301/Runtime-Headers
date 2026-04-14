@class NSString, NSImage, NSArray;

@interface Safari.CompletionListSearchEngineSuggestionData : NSObject <CompletionListItemData> {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ faviconURLString;
    void /* function */ highlightedRanges;
    void /* function */ accessibilityIdentifier;
    void /* function */ deleteAction;
    void /* function */ deleteActionTitle;
    void /* unknown type, empty encoding */ isPostFixSuggestion;
    void /* unknown type, empty encoding */ richSearchSuggestionSubtitle;
    void /* unknown type, empty encoding */ entityIDURLParameter;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, copy) NSString *faviconURLString;
@property (nonatomic, retain) NSImage *secondaryImage;
@property (nonatomic, readonly) NSArray *highlightedRanges;
@property (nonatomic, readonly) unsigned long long lineBreakMode;
@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, copy) id /* block */ deleteAction;
@property (nonatomic, copy) NSString *deleteActionTitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 secondaryImage:(id)a2 highlightedRanges:(id)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 secondaryImage:(id)a2 highlightedRanges:(id)a3 isPostFixSuggestion:(BOOL)a4 richSearchSuggestion:(id)a5;

@end
