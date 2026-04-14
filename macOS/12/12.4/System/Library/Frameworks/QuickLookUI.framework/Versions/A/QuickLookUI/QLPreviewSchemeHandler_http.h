@interface QLPreviewSchemeHandler_http : QLPreviewSchemeHandler

- (void)calculatePreviewURL:(id *)a0 previewData:(id *)a1 previewProperties:(id *)a2 previewType:(id *)a3;
- (id)initWithPreviewItem:(id)a0;
- (id)filteredControlsFromControls:(id)a0;
- (void)_calculatePreviewURL:(id *)a0 previewData:(id *)a1 previewProperties:(id *)a2 previewType:(id *)a3;
- (void)serviceGOOGLE_MAPSPreviewURL:(id *)a0 previewData:(id *)a1 previewProperties:(id *)a2 previewType:(id *)a3;
- (void)serviceAPPLE_MAPSPreviewURL:(id *)a0 previewData:(id *)a1 previewProperties:(id *)a2 previewType:(id *)a3;

@end
