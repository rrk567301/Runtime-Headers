@class NSXPCConnection;

@interface WBSPasswordsDataImporter : NSObject {
    NSXPCConnection *_connectionToCredentialExtractionService;
}

+ (long long)importCredential:(id)a0;

- (void).cxx_destruct;
- (void)importFromCSVWithFileURL:(id)a0 progressHandler:(id /* block */)a1;

@end
