@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)hasThumbnailImage;
- (double)placeholderHeight;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (BOOL)shouldUsePlaceholderBoundsIfNecessary;
- (id)placeholderImageSystemName;
- (double)placeholderWidth;
- (void)updateFileBasedAttributes;
- (void)addLocation;

@end
