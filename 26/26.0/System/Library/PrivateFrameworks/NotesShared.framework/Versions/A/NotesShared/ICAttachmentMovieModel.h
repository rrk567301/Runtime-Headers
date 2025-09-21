@interface ICAttachmentMovieModel : ICAttachmentModel

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)asset;
- (BOOL)hasThumbnailImage;
- (double)placeholderHeight;
- (double)placeholderWidth;
- (void)addLocation;
- (BOOL)hasPreviews;
- (id)placeholderImageSystemName;
- (BOOL)shouldUsePlaceholderBoundsIfNecessary;
- (BOOL)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

@end
