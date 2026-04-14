@class NSColor, NSString, NSNumber;

@interface _AMMailAttributeRun : SBObject

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property (copy) NSNumber *size;

- (void)delete;
- (id)attachments;
- (id)characters;
- (void)moveTo:(id)a0;
- (id)words;
- (id)paragraphs;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
