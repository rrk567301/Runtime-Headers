@interface ICAttachmentMapModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (BOOL)preferLocalPreviewImages;
- (BOOL)hasPreviews;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (void)addLocation;
- (id)MKMapItem;

@end
