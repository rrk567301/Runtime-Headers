@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (BOOL)hasThumbnailImage;
- (void)updateFileBasedAttributes;
- (BOOL)showThumbnailInNoteList;
- (BOOL)hasPreviews;
- (void)updateAttachmentSize;
- (void)addLocation;

@end
