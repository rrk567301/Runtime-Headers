@class NSURLAuthenticationChallenge, BADownload, NSURLCredential;

@interface BAManagedDownloaderExtensionWrapper : NSObject <BADownloaderExtension> {
    void /* unknown type, empty encoding */ swiftExtension;
}

- (id)init;
- (void).cxx_destruct;
- (void)backgroundDownload:(BADownload *)a0 didReceiveChallenge:(NSURLAuthenticationChallenge *)a1 completionHandler:(void (^)(long long, NSURLCredential *))a2;
- (void)backgroundDownload:(id)a0 failedWithError:(id)a1;
- (void)backgroundDownload:(id)a0 finishedWithFileURL:(id)a1;
- (id)downloadsForRequest:(long long)a0 manifestURL:(id)a1 extensionInfo:(id)a2;
- (id)initWithWrappedExtension:(id)a0;

@end
