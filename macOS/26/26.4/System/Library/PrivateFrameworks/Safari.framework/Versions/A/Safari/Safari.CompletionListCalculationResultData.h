@class NSString, NSImage, NSArray;

@interface Safari.CompletionListCalculationResultData : NSObject <CompletionListItemData> {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ faviconURLString;
    void /* function */ highlightedRanges;
    void /* function */ accessibilityIdentifier;
    void /* function */ deleteAction;
    void /* function */ deleteActionTitle;
    void /* unknown type, empty encoding */ sfSearchResultValue;
    void /* unknown type, empty encoding */ searchUIResultType;
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
@property (nonatomic, copy) NSString *deleteActionTitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQuery:(id)a0 calculationResult:(id)a1;

@end
