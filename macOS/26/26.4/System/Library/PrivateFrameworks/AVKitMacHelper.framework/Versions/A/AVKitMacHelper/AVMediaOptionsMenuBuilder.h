@class NSString;

@interface AVMediaOptionsMenuBuilder : NSObject <NSMenuDelegate> {
    void /* unknown type, empty encoding */ mediaOptionsController;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL includesStylesSubmenu;
@property (nonatomic, readonly) long long legibleEnablementState;
@property (nonatomic, readonly) NSString *currentLanguageName;
@property (nonatomic, readonly) NSString *currentStyleName;

- (void).cxx_destruct;
- (id)init;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (void)menuDidClose:(id)a0;
- (void)toggleCaptions:(id)a0;
- (id)initWithMediaOptionsController:(id)a0;
- (id)buildMenuFor:(long long)a0;
- (id)buildMenuFor:(long long)a0 includeOnOff:(BOOL)a1;
- (id)buildSubmenuFor:(long long)a0 ofSubType:(long long)a1;
- (id)createLanguagesSubmenuFrom:(id)a0;
- (id)createOnOffActionWithIsOn:(BOOL)a0;
- (id)createStylesSubmenuFrom:(id)a0;
- (void)hidePreview;
- (void)manageStyles:(id)a0;
- (id)optionsFor:(long long)a0 subtype:(long long)a1;
- (void)selectLanguageOption:(id)a0;
- (void)selectStyleOption:(id)a0;
- (id)selectedOptionFor:(long long)a0 subtype:(long long)a1;
- (void)showPreviewForStyleOption:(id)a0;

@end
