@class NSString, NSImage, NSArray;

@interface Safari.CompletionListBannerData : NSObject <CompletionListItemData> {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ faviconURLString;
    void /* function */ highlightedRanges;
    void /* function */ accessibilityIdentifier;
    void /* function */ deleteAction;
    void /* unknown type, empty encoding */ hostingView;
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
- (id)initWithHostingView:(id)a0;

@end
