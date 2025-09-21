@interface ICAttachmentWebModel : ICAttachmentModel

@property (copy) id /* block */ pendingFetchCompletionHandler;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (char)canConvertToHTMLForSharing;
- (char)hasPreviews;
- (id)searchableTextContent;
- (char)showThumbnailInNoteList;

@end
