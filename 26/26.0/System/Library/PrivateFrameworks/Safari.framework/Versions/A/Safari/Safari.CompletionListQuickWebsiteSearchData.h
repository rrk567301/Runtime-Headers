@class NSString, NSImage, NSArray;

@interface Safari.CompletionListQuickWebsiteSearchData : NSObject <CompletionListItemData> {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ faviconURLString;
    void /* function */ highlightedRanges;
    void /* function */ accessibilityIdentifier;
    void /* function */ deleteAction;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *faviconURLString;
@property (nonatomic, retain) NSImage *secondaryImage;
@property (nonatomic, readonly) NSArray *highlightedRanges;
@property (nonatomic, readonly) unsigned long long lineBreakMode;
@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, copy) id /* block */ deleteAction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 secondaryImage:(id)a1 highlightedRanges:(id)a2 faviconURLString:(id)a3;

@end
