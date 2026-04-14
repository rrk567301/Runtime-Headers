@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)hasThumbnailImage;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;
- (void)addLocation;

@end
