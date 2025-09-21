@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)contentTextFromPDFAtURL:(id)a0;

- (char)canMarkup;
- (char)hasPreviews;
- (char)providesStandaloneTitleForNote;
- (id)searchableTextContent;
- (char)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

@end
