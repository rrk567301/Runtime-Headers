@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)contentTextFromPDFAtURL:(id)a0;

- (id)searchableTextContent;
- (BOOL)hasPreviews;
- (BOOL)canMarkup;

@end
