@class NSMorphologyCustomPronoun;

@interface IPInflectionSettingsCustomSheetController : NSWindowController

@property (retain, nonatomic) NSMorphologyCustomPronoun *customPronoun;

+ (id)controllerWithCustomPronoun:(id)a0;

- (void).cxx_destruct;
- (void)doCancel:(id)a0;
- (void)doSave:(id)a0;

@end
