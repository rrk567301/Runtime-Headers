@interface NDANFParsingService : NSObject <FCFlintHelper>

- (id)resourceIDsFromFlintDocumentData:(id)a0;
- (id)_imageResourcesByIdentifierFromList:(id)a0;
- (id)_nonImageResourcesFromList:(id)a0;
- (BOOL)_preferTaggedImages;
- (id)_requiredResourceURLsFromANFJSON:(id)a0;

@end
