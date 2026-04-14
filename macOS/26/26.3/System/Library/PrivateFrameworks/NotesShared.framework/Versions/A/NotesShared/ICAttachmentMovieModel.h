@interface ICAttachmentMovieModel : ICAttachmentModel

- (id)asset;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
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
