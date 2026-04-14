@class ATXDocumentInteractionDonationClient, NSObject;
@protocol OS_dispatch_queue;

@interface NSAppPredictionDonationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXDocumentInteractionDonationClient *_documentInteractionDonationClient;
}

+ (id)sharedManager;
+ (Class)_loadDocumentInteractionDonationClientClassIfNeeded;
+ (unsigned long long)_mapDocumentInteractionType:(unsigned long long)a0;

- (id)_init;
- (void).cxx_destruct;
- (void)donateDocumentInteractionForType:(unsigned long long)a0 fileURL:(id)a1 contentTypeIdentifier:(id)a2;
- (void)_donateDocumentInteractionForType:(unsigned long long)a0 fileURL:(id)a1 contentTypeIdentifier:(id)a2;

@end
