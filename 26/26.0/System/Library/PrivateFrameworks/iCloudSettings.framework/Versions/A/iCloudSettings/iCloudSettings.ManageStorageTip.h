@class NSString, NSArray;

@interface iCloudSettings.ManageStorageTip : NSObject {
    void /* function */ identifier;
    void /* function */ title;
    void /* function */ subTitle;
    void /* function */ dismissURL;
    void /* function */ anchor;
    void /* function */ sfSymbol;
    void /* function */ sfSymbolColor;
    void /* function */ actions;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subTitle;
@property (nonatomic, readonly) NSString *dismissURL;
@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSString *sfSymbol;
@property (nonatomic, readonly) NSString *sfSymbolColor;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) BOOL containsUpsellAction;
@property (nonatomic, readonly) BOOL containsFamilyAction;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
