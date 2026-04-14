@class NSFont, NSFontManager;
@protocol UINSFontManagerDelegate;

@interface UINSFontManager : NSObject {
    NSFontManager *_fontManager;
    NSFont *_originalFontBeforeFallback;
    NSFont *_fallbackFont;
}

@property (readonly, weak) id<UINSFontManagerDelegate> delegate;

+ (id)sharedFontManager;
+ (void)toggleFontPanelShown:(id)a0;
+ (BOOL)isFontPanelVisible;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)changeColor:(id)a0;
- (void)changeAttributes:(id)a0;
- (id)convertAttributes:(id)a0;
- (void)changeFont:(id)a0;
- (void)setSelectedAttributes:(id)a0 isMultiple:(BOOL)a1;
- (void)changeColorWithColor:(id)a0;

@end
