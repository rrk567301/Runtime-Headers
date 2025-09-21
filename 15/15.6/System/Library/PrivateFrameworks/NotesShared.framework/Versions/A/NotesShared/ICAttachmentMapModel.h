@interface ICAttachmentMapModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)MKMapItem;
- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (char)canConvertToHTMLForSharing;
- (char)hasPreviews;
- (char)preferLocalPreviewImages;
- (char)previewsSupportMultipleAppearances;
- (char)shouldSyncPreviewImageToCloud:(id)a0;

@end
