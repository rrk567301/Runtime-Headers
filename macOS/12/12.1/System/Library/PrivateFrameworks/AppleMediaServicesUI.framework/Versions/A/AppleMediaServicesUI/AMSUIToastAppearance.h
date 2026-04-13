@class NSColor, NSImage, NSFont;

@interface AMSUIToastAppearance : AMSUIAppearance <NSCopying>

@property (retain) NSColor *accessoryButtonColor;
@property (retain) NSFont *accessoryButtonFont;
@property (retain) NSColor *backgroundColor;
@property (retain) NSImage *backgroundImage;
@property (retain) NSColor *imageTintColor;
@property (retain) NSFont *messageFont;
@property (retain) NSColor *messageTextColor;
@property (retain) NSFont *titleFont;
@property (retain) NSColor *titleTextColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
