@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentTextFromPDFAtURL:(id)a0;

- (BOOL)canMarkup;
- (BOOL)hasPreviews;
- (BOOL)providesStandaloneTitleForNote;
- (id)searchableTextContent;
- (BOOL)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

@end
