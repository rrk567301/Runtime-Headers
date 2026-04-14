@class NSColor, NSString;

@interface _AMKeynote5Paragraph : _AMKeynote5Item

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)attachments;
- (id)characters;
- (id)words;
- (id)attributeRuns;
- (id)paragraphs;

@end
