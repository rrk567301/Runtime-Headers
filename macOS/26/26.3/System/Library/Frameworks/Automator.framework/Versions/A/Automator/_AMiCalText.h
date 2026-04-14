@class NSColor, NSString, NSNumber;

@interface _AMiCalText : SBObject

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property (copy) NSNumber *size;

- (void)delete;
- (id)attachments;
- (id)characters;
- (BOOL)exists;
- (void)moveTo:(id)a0;
- (id)words;
- (id)attributeRuns;
- (id)paragraphs;
- (void)show;
- (void)GetURL;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
