@class NSString;

@interface ICMFontManager : NSFontManager <NSMenuItemValidation>

@property (nonatomic) char isTogglingBoldface;
@property (nonatomic) char isTogglingItalics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isMenuItemToggleBold:(id)a0;
+ (char)isMenuItemToggleItalics:(id)a0;

@end
