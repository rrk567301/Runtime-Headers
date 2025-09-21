@interface ICAttachmentMapModel : ICAttachmentModel

- (id)MKMapItem;
- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (BOOL)hasPreviews;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;

@end
