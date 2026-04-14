@class NSColor, NSString;

@interface _AMSafariWord : _AMSafariItem

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)characters;
- (id)attachments;
- (id)words;
- (id)attributeRuns;
- (id)paragraphs;

@end
