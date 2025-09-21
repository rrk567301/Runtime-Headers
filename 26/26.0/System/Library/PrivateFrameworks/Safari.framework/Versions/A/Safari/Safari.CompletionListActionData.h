@class NSString, NSImage, NSArray;

@interface Safari.CompletionListActionData : NSObject <CompletionListItemData> {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ faviconURLString;
    void /* unknown type, empty encoding */ systemSymbol;
    void /* function */ highlightedRanges;
    void /* function */ accessibilityIdentifier;
    void /* function */ deleteAction;
    void /* unknown type, empty encoding */ isChecked;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *faviconURLString;
@property (nonatomic, retain) NSImage *secondaryImage;
@property (nonatomic, copy) NSArray *highlightedRanges;
@property (nonatomic, readonly) unsigned long long lineBreakMode;
@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, copy) id /* block */ deleteAction;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isPicker:(BOOL)a1 isChecked:(BOOL)a2 systemSymbol:(id)a3;

@end
