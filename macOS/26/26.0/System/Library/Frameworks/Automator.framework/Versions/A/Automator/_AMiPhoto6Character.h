@class NSColor, NSString;

@interface _AMiPhoto6Character : _AMiPhoto6Item

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)attachments;
- (id)characters;
- (id)words;
- (id)attributeRuns;
- (id)paragraphs;

@end
