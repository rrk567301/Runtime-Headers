@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)asset;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)hasThumbnailImage;
- (double)placeholderHeight;
- (double)placeholderWidth;
- (void)addLocation;
- (char)hasPreviews;
- (id)placeholderImageSystemName;
- (char)shouldUsePlaceholderBoundsIfNecessary;
- (char)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

@end
