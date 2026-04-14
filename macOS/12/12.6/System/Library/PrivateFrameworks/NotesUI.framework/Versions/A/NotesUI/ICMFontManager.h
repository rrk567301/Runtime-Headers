@interface ICMFontManager : NSFontManager

@property (nonatomic) BOOL isTogglingBoldface;
@property (nonatomic) BOOL isTogglingItalics;

+ (BOOL)isMenuItemToggleBold:(id)a0;
+ (BOOL)isMenuItemToggleItalics:(id)a0;

- (BOOL)validateMenuItem:(id)a0;
- (void)setSelectedFont:(id)a0 isMultiple:(BOOL)a1;
- (void)addFontTrait:(id)a0;
- (void)modifyFontViaPanel:(id)a0;

@end
