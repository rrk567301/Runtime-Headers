@interface ICAttachmentWebModel : ICAttachmentModel

@property (copy) id /* block */ pendingFetchCompletionHandler;

- (void).cxx_destruct;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (BOOL)hasPreviews;
- (id)searchableTextContent;
- (BOOL)showThumbnailInNoteList;

@end
