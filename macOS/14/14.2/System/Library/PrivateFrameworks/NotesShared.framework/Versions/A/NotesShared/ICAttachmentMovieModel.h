@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)hasThumbnailImage;
- (double)placeholderHeight;
- (void)addLocation;
- (BOOL)hasPreviews;
- (id)placeholderImageSystemName;
- (double)placeholderWidth;
- (BOOL)shouldUsePlaceholderBoundsIfNecessary;
- (BOOL)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

@end
