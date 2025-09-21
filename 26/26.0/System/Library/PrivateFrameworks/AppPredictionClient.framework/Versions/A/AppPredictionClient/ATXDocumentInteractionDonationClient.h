@interface ATXDocumentInteractionDonationClient : NSObject

+ (id)shared;

- (void)donateDocumentInteractionForType:(unsigned long long)a0 fileURL:(id)a1 contentTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)donateDocumentInteraction:(id)a0 completion:(id /* block */)a1;

@end
