@class NSColor, NSString;

@interface _AMSafariCharacter : _AMSafariItem

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)attachments;
- (id)characters;
- (id)words;
- (id)attributeRuns;
- (id)paragraphs;

@end
