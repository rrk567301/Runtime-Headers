@class NSColor, NSString;

@interface _AMSafariText : _AMSafariItem

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)attachments;
- (id)characters;
- (id)words;
- (id)attributeRuns;
- (id)paragraphs;
- (id)doJavaScriptIn:(id)a0;

@end
